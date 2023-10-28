#include "trap.h"
char* test[]={"werfgh","werffgg","12345","wefrgh","32456t~@#$^&*()`ygfdr\ttfg\n",""};
char* test2[]={"werfgh","werffgg","12345","wefrgh","32456t~@#$^&*()`ygfdr\ttfg\n",""};
char* test3[]={"werfgh1","werffgg1","123451","wefrgh1","32456t~@#$^&*()`ygfdr\ttfg\n1","1"};
char* test4[]={"werfg","werffga","1234","wefrg","32456t~@#$^&*()`ygfdr\ttfg"};

void test_strcmp(){
    for(int i=0;i<6;i++){
        assert(strcmp(test[i],test2[i])==0);
    }
    for(int i=0;i<6;i++){
        assert(strcmp(test[i],test3[i])<0);
    }
    for(int i=0;i<5;i++){
        assert(strcmp(test[i],test4[i])>0);
    }
}
int main(){
    test_strcmp();
}