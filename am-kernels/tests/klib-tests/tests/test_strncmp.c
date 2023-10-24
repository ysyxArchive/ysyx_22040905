#include "trap.h"

void test_strncmp(){
    assert(strncmp("1111111","111",2)==0);
    assert(strncmp("1111111","111",3)==0);
    assert(strncmp("1111111","111",4)>0);
    assert(strncmp("azzzzz34tryh","dsfbg",5)<0);
    assert(strncmp("111","111",1)==0);
    assert(strncmp("zzzzz","zzzz",4)==0);
}
int main(){
    test_strncmp();
}