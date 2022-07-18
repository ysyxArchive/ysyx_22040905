#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <math.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
int len=0;//length of buf
static void gen(char c){
  buf[len++]=c;
}
static void gen_rand_op(){
  switch(rand()%4){
    case 0: gen('+');break;
    case 1: gen('-');break;
    case 2: gen('*');break;
    case 3: gen('/');break;
  }
}
static void gen_num(){
  int n=rand()%2;
  for(int i=0;i<=n;i++)
    if(!i) gen(rand()%9+'1');
    else gen(rand()%10+'0');
}
static void gen_rand_expr() {
  switch (rand()%3) {
    case 0: gen_num();gen('u');break;
    case 1: gen_rand_expr();gen_rand_op();gen_rand_expr(); break;
    default: gen('('); gen_rand_expr(); gen(')'); break;
  } 
}
int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    len=0;
    gen_rand_expr();
    buf[len]='\0';
    char buff[59999];
    strcpy(buff,buf);
    int len=strlen(buff);
    for(int i=0;i<len;i++){
      if(buff[i]=='u'){
        for(int j=i;j<len-1;j++){
          buff[j]=buff[j+1];
        }
        len--;
        buff[len]='\0';
      }
    }
    sprintf(code_buf, code_format, buf);
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);
    
    printf("%u %s\n", result, buff);
  }
  return 0;
}
