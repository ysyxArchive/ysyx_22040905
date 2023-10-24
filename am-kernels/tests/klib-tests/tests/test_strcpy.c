#include "trap.h"
char* test[]={"werfgh","werffgg","12345","wefrgh","32456t~@#$^&*()`ygfdr\ttfg\n"};
void test_strcpy(){
  for(int i=0;i<5;i++){
    char dest[100];
    strcpy(dest,test[i]);
    int len=strlen(test[i]);
    for(int j=0;j<len;j++){
      assert(dest[j]==test[i][j]);
    }
    assert(dest[len]=='\0'&&test[i][len]=='\0');
  }
}
int main(){
  test_strcpy();
}

