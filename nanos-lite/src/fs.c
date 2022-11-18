#include <fs.h>
#include <device.h>

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

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FB, FD_DISPINFO};

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
  [FD_STDIN]    = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT]   = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR]   = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENTS]   = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_FB]       = {"/dev/fb", 0, 0, invalid_read, fb_write},
  [FD_DISPINFO] = {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},
#include "files.h"
};

int fs_open(const char *pathname, int flags, int mode){
  for(int i=FD_STDERR+1;i<sizeof(file_table) / sizeof(file_table[0]);i++)
  {
    if(strcmp(file_table[i].name,pathname)==0){
      file_table[i].open_offset=0;
      return i;
    }
  }
  assert(0);
}
size_t fs_read(int fd, void *buf, size_t len){

  if((file_table[fd].read!=NULL)){
  return file_table[fd].read(buf,0,len);
  }
  //assert(file_table[fd].open_offset+len<=program_break);
  if(len+file_table[fd].open_offset>file_table[fd].size){
    len=file_table[fd].size-file_table[fd].open_offset;
  }
  ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
  file_table[fd].open_offset+=len;
  return len;
}
size_t fs_write(int fd, const void *buf, size_t len){
  if(fd==FD_FB){
    size_t lenn=file_table[fd].write(buf,file_table[fd].open_offset,len);
    file_table[fd].open_offset+=lenn;
    return lenn;
  }
  if((file_table[fd].write!=NULL)){
  return file_table[fd].write(buf,0,len);
  }
  assert(file_table[fd].open_offset+len<=program_break);
  /*if(len+file_table[fd].open_offset>file_table[fd].size){
    len=file_table[fd].size-file_table[fd].open_offset;
  }*/
  ramdisk_write(buf,file_table[fd].disk_offset+file_table[fd].open_offset,len);
  file_table[fd].open_offset+=len;
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
  //assert(file_table[fd].open_offset<=file_table[fd].size);
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
  file_table[FD_FB].size=190112;
  // TODO: initialize the size of /dev/fb
}
