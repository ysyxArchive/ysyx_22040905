#include "trap.h"

int main(){
    long long a[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++){
       check(a[i]==i);
    }
}