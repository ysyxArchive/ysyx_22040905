#include "trap.h"
char* test[]={"wer\0fgh\0","werffgg\0","12345\0","wefrgh\0","32456t~@#$^&*()`ygfdr\ttfg\n\0","\0\0"};
char* test2[]={"wer\0fgh\0","werffgg\0","12345\0","wefrgh\0","32456t~@#$^&*()`ygfdr\ttfg\n\0","\0\0"};
char* test3[]={"wer\0fgh1","werffgg1","123451","wefrgh1","32456t~@#$^&*()`ygfdr\ttfg\n1","1\0"};
char* test4[]={"wer\0fg\0\0","werffga\0","1234\0\0","wefrg\0\0","32456t~@#$^&*()`ygfdr\ttfg\0\0"};
size_t len[]={8,8,6,7,28,2};
void test_memcmp(){
    for(int i=0;i<6;i++){
        assert(memcmp(test[i],test2[i],len[i])==0);
    }
    for(int i=0;i<6;i++){
        assert(memcmp(test[i],test3[i],len[i])<0);
    }
    for(int i=0;i<5;i++){
        assert(memcmp(test[i],test4[i],len[i])>0);
    }
}
int main(){
    test_memcmp();
}