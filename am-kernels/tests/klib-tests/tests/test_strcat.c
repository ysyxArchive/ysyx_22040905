#include "trap.h"
char* test[]={"werfgh","werffgg","12345","wefrgh","32456t~@#$^&*()`ygfdr\ttfg\n"};
void test_strcat(){
  for(int i=0;i<5;i++){
    char dest[100];
    for(int i=0;i<10;i++){
      dest[i]=20;
    }
    dest[10]='\0';
    strcat(dest,test[i]);
    int len=strlen(test[i]);
    for(int j=0;j<10;j++){
      assert(dest[j]==20);
    }
    for(int j=10;j<10+len;j++)
    {
      assert(*(dest+j)==test[i][j-10]);
    }
  }
}
int main() {
	test_strcat();

}
