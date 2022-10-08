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

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr ehdr[1];
  ramdisk_read(ehdr,0,get_ramdisk_size());
  for(int i=0;i<16;i++)
  printf("%x\n",ehdr->e_ident[i]);
  assert(*(uint64_t *)ehdr->e_ident == 0x7f454c46);
  return (uintptr_t)ehdr;
}

void naive_uload(PCB *pcb, const char *filename) {
  //uintptr_t entry = 
  loader(pcb, filename);
  //Log("Jump to entry = %p", (void *)entry);
  //((void(*)())entry) ();
}

