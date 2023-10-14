#include <proc.h>
#include <elf.h>
#include <stdio.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
extern uint8_t ramdisk_start;

size_t get_ramdisk_size();
size_t get_file_size(int fd);

#define BUF_SIZE 1048576
char buf[BUF_SIZE];
static uintptr_t loader(PCB *pcb, const char *filename) {
  int fd=fs_open(filename,0,0);
  fs_read(fd,buf,get_file_size(fd));
  fs_close(fd);
  Elf_Ehdr* ehdr=(Elf_Ehdr*)buf;
  Elf_Phdr* phdr=(Elf_Phdr*)(buf+ehdr->e_phoff);
  assert(*(uint32_t *)ehdr->e_ident == 0x464c457f);
  for(unsigned i=0;i<ehdr->e_phnum;i++){
    if(phdr[i].p_type==PT_LOAD &&phdr[i].p_memsz){
      if(phdr[i].p_filesz){
        memcpy((uint8_t *)phdr[i].p_vaddr,(uint8_t*)buf+phdr[i].p_offset,phdr[i].p_filesz);
      }
      memset((uint8_t *)phdr[i].p_vaddr+phdr[i].p_filesz,0,phdr[i].p_memsz-phdr[i].p_filesz);
    }
  }
  return (uintptr_t)(ehdr->e_entry);
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", (uintptr_t *)entry);
  ((void(*)())entry) ();
  printf("Should not reach here.\n");
}

