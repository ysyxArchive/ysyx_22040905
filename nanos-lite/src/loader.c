#include <proc.h>
#include <elf.h>
#include <stdio.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
extern uint8_t ramdisk_start;
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();


uint8_t buf[131072];
static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr ehdr[1];
  Elf_Phdr phdr[2048];
  ramdisk_read(ehdr,0,get_ramdisk_size());
  //printf("%p %p\n",ehdr,&ramdisk_start);
  assert(*(uint32_t *)ehdr->e_ident == 0x464c457f);
  int num=ehdr->e_phnum;
  memcpy(phdr,ehdr+(ehdr->e_phoff),ehdr->e_phentsize);
  for(int i=0;i<num;i++){
    if(phdr[i].p_type==PT_LOAD){
      memcpy(buf,ehdr+(phdr[i].p_offset),phdr[i].p_filesz);
      memset(buf+phdr[i].p_filesz,0,phdr[i].p_memsz-phdr[i].p_filesz);
      //printf("%p",ehdr+(phdr[i].p_offset));
      //uint64_t t=(uint64_t)(&ramdisk_start);
      //printf("%lx\n\n",t);
      for(uint64_t i=0;i<10;i++){
        printf("%016lx\n",*((uint64_t *)((0x80002559)+8*i)));
      }
      printf("***************\n");
      memcpy((void *)(phdr[i].p_vaddr),buf,phdr[i].p_memsz);
      for(uint64_t i=0;i<10;i++){
        printf("%016lx\n",*((uint64_t *)((0x83000000)+8*i)));
      }
      printf("***************\n");
      //printf("%lx\t%lx\t%lx\t%lx\n",phdr[i].p_offset,vhdr[i].p_paddr,phdr[i].p_filesz,phdr[i].p_memsz);
    }
  }
  return (uintptr_t)(0x83000000);
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", (uintptr_t *)entry);
  ((void(*)())entry) ();
}

