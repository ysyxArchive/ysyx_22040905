#include "trap.h"
char* test[]={"werfgh","werffgg","12345","wefrgh","32456t~@#$^&*()`ygfdr\ttfg\n",""};
int ans[]={6,7,5,6,26,0};
void test_strlen(){
    for(int i=0;i<6;i++){
        assert(strlen(test[i])==ans[i]);
    }
}
int main(){
    test_strlen();
}
