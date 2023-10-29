#include "trap.h"
char* test[]={"werfgh","werffgg","12345","wefrgh","32456t~@#$^&*()`ygfdr\ttfg\n"};
int min(int a,int b){
  return a>b?b:a;
}
void test_strncpy(){
  for(int n=0;n<30;n++){
    for(int i=0;i<5;i++){
      char dest[100];
      for(int i=0;i<100;i++){
        dest[i]=20;
      }
      int len=strlen(test[i]);
      strncpy(dest,test[i],n);
      for(int j=0;j<min(n,len);j++){
        assert(dest[j]==test[i][j]);
      }
      if(n>len){
        for(int j=len;j<n;j++){
          assert(dest[j]=='\0');
        }
      }
      for(int j=n;j<100;j++)
      assert(dest[j]==20);
    }
  }
}
int main(){
  test_strncpy();
}

