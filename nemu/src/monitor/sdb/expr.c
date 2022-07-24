#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/vaddr.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_UEQ,TK_AND,TK_D,TK_H,TK_REG,DEREF
  /* blank          ==     !=      &&    %d   %x  $(reg) *(address)*/
  /* TODO: Add more token types */

};
static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {" +", TK_NOTYPE},             // spaces
  {"0x[0-9a-zA-Z]+",TK_H},   // hexadecimal-number
  {"\\$[a-z]*[0-9]*",TK_REG},           //reg_name
  {"\\+", '+'},                  // plus
  {"\\-", '-'},                  // subtract
  {"\\*", '*'},                  // multiply
  {"\\/", '/'},                  // divide
  {"[0-9]+",TK_D},         // decimal-number
  {"\\(",'('},                   // left parenthesis
  {"\\)",')'},                   // right parenthesis
  {"==", TK_EQ},                 // equal 
  {"!=", TK_UEQ},                 // unequal 
  {"&&", TK_AND},                 // and

};
static uint32_t pr[500];//precedence of operator
#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
  //init precedence of operator
  pr[DEREF]=5;
  pr['*']=4;
  pr['/']=4;
  pr['+']=3;
  pr['-']=3;
  pr[TK_EQ]=2;
  pr[TK_UEQ]=2;
  pr[TK_AND]=1;
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[3200000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        //char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if(substr_len>=32000)assert(0);

        switch (rules[i].token_type) {
          case TK_NOTYPE:break;
          case '+':
          case '-':
          case '*':
          case '/':
          case '(':
          case ')':
          case TK_EQ:
          case TK_AND:
          case TK_UEQ: tokens[nr_token++].type=rules[i].token_type;break;
          case TK_REG:
          case TK_H:
          case TK_D: tokens[nr_token].type=rules[i].token_type;
                     strncpy(tokens[nr_token++].str,e+position-substr_len,substr_len);break;
          default: assert(0);//TODO();
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}
bool check_parentheses(int p,int q){
  if((tokens[p].type=='(')&&(tokens[q].type==')')){
    int num=0;
    for(int i=p+1;i<=q-1;i++){
      if(num<0)return false;
      if(tokens[i].type=='(')num++;
      if(tokens[i].type==')')num--;
    }
    if(num!=0){
      printf("Check parentheses\n");
      assert(0);
    }
    return true;
  }
  return false;
}
uint32_t find_main_operator(int p,int q){
  int op=-1;
  int num=0;
  for(int i=p;i<=q;i++){
    if(tokens[i].type==TK_D||tokens[i].type==TK_H||tokens[i].type==TK_REG)continue;
    if(tokens[i].type=='('){
      num=1;
      while(num)
      {
        i++;
        if(tokens[i].type=='(')num++;
        if(tokens[i].type==')')num--;
        //printf("%d %d\n",i,q);
      }
    }
    else if(op==-1){
      op=i;
    }
    else if(pr[tokens[op].type]>=pr[tokens[i].type]){
      op=i;
    }
  }
  return op;
}
uint32_t eval (int p,int q){
  if(p>q){
    return 0;
    //assert(0);
  }
  else if(p==q){
    if(tokens[p].type==TK_D) return atoi(tokens[p].str);
    else if(tokens[p].type==TK_H){
      uint32_t str=0;
      sscanf(tokens[p].str,"%x",&str);
      return str;
    }
    else if(tokens[p].type==TK_REG){
      bool success=true;
      uint32_t ans=isa_reg_str2val(tokens[p].str,&success);
      if(success)return ans;
      else assert(0); 
    }
  }
  else if(check_parentheses(p,q)){
    return eval(p+1,q-1);
  }
  else{
    int op=find_main_operator(p,q);
    //printf("%d\n",op);
    uint32_t val1=eval(p,op-1);
    uint32_t val2=eval(op+1,q);
    //printf("%d %d %d\n",op,val1,val2);
    //printf("%s %d\n",tokens[2].str,atoi(tokens[2].str));
    switch (tokens[op].type){
      case '+': return val1+val2;
      case '-': return val1-val2;
      case '*': return val1*val2;
      case '/': if(val2==0) printf("warining: division by zero\n");return val1/val2;
      case TK_AND: return val1&&val2;
      case TK_EQ:  return val1==val2;
      case TK_UEQ: return val1!=val2; 
      case DEREF: return vaddr_read((vaddr_t)(val2),4);
      default: assert(0);
    }
  }
  return 0;
}
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  /*
  for(int i=0;i<nr_token;i++){
    printf("%s\n",tokens[i].str);
  }*/
  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  for (int i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != TK_D&&tokens[i-1].type!=TK_H&&tokens[i-1].type!=TK_REG)) ) {
    tokens[i].type = DEREF;
  }
}
  return eval(0,nr_token-1);
}

