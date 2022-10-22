#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

extern uintptr_t program_break;
typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

int fs_open(const char *pathname, int flags, int mode){
  for(int i=FD_FB;i<sizeof(file_table) / sizeof(file_table[0]);i++)
  {
    if(strcmp(file_table[i].name,pathname)==0){
      file_table[i].open_offset=0;
      return i;
    }
  }
  assert(0);
}
size_t fs_read(int fd, void *buf, size_t len){
  assert(file_table[fd].open_offset+len<=program_break);
  ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
  file_table[fd].open_offset+=len;
  return len;
}
size_t fs_write(int fd, const void *buf, size_t len){
  int i=0;
  if(fd==FD_STDOUT||fd==FD_STDERR){
    char *buff=(char *)buf;
    for(;i<len&&(*(buff+i)!='\0');i++){
      putch(*(buff+i));
    }
    return i;
  }
  else{
    assert(file_table[fd].open_offset+len<=program_break);
    ramdisk_write(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
    file_table[fd].open_offset+=len;
  }
  return len;
}
size_t fs_lseek(int fd, size_t offset, int whence){
  if(whence==SEEK_SET){
    file_table[fd].open_offset=offset;
  }
  if(whence==SEEK_CUR){
    file_table[fd].open_offset+=offset;
  }
  if(whence==SEEK_END){
    file_table[fd].open_offset=file_table[fd].size+offset;
  }
  assert(file_table[fd].open_offset<=program_break);
  return file_table[fd].open_offset;
}
int fs_close(int fd){
  return 0;
}
size_t get_file_size(int fd){
  return file_table[fd].size;
}
char *fd_name(int fd){
  return file_table[fd].name;
}
void init_fs() {
  // TODO: initialize the size of /dev/fb
}
