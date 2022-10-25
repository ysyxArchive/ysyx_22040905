#include <stdio.h>
#include <NDL.h>

int main() {
  NDL_Init(0);
  while (1) {
    char buf[64];
    if (NDL_PollEvent(buf, sizeof(buf))) {
      int l=0;
      for(int i=0;buf[i]!='\0';i++){
        if(buf[i]=='\n'){l++;}
      }
      printf("receive event: %s\n", buf);
    }
  }
  return 0;
}
