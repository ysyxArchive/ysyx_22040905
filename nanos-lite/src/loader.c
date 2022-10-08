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

static uintptr_t loader(PCB *pcb, const char *filename) {
  /*Elf_Ehdr ehdr[1];
  FILE *fp = &ramdisk_start;
  fseek(fp,0,SEEK_SET);
  int ret=fread(ehdr, sizeof(Elf64_Ehdr), 1, fp);
  assert(ret!=0);
  printf("%lx\n",ehdr->e_ident);
  //assert(*(uint64_t *)ehdr->e_ident == 0xBadC0de);*/
  char buf[40];
  int len=ramdisk_read(buf,0,4);
  for(int i=0;i<len;i++){
  printf("%c",*(buf+i));
  }
  printf("\n");
  return (uint64_t)&ramdisk_start;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  //Log("Jump to entry = %p", (void *)entry);
  ((void(*)())entry) ();
}

