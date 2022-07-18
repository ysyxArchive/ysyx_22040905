#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

/*void insert_string(char *a,char *b,int k,char *ans)
{
    int i=0,lena=strlen(a),lenb=strlen(b),j=0;
    for(i=0; i<k; i++)
    {
        *ans=*a;
        a++;
        ans++;
    }
    while(*b!='\0')
    {
        *ans=*b;
        b++;
        ans++;
    }
    while(*a!='\0')
    {
        *ans=*a;
        a++;
        ans++;
    }
    *ans='\0';
}*/
enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},         // subtract
  {"\\*", '*'},         // multiply
  {"\\/", '/'},         // divide
  {"[0-9]+",TK_NUM},    // num
  {"\\(",'('},          // left parenthesis
  {"\\)",')'},          // right parenthesis
  {"==", TK_EQ},        // equal 

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
  pr['+']=1;
  pr['-']=1;
  pr['*']=2;
  pr['/']=2;

}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32000] __attribute__((used)) = {};
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
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

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
          case '\\':
          case '(':
          case ')':
          case TK_EQ: tokens[nr_token++].type=rules[i].token_type;break;
          case TK_NUM: tokens[nr_token].type=rules[i].token_type;
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
  if(tokens[p].type=='('&&tokens[q].type==')')
    return true;
  return false;
}
uint32_t find_main_operator(int p,int q){
  int op=-1;
  for(int i=p;i<=q;i++){
    if(tokens[i].type==TK_NUM)continue;
    if(tokens[i].type=='('){
      while(tokens[i].type!=')')
      {
        i++;
        if(i>=q)assert(0);
      }
    }
    else if(op==-1){
      op=i;
    }
    else if(pr[tokens[p].type]>=pr[tokens[i].type]){
      p=i;
    }
  }
  return op;
}
uint32_t eval (int p,int q){
  if(p>q){
    assert(0);
  }
  else if(p==q){
    assert(tokens[p].type==TK_NUM);
    return atoi(tokens[p].str);
  }
  else if(check_parentheses(p,q)){
    return eval(p+1,q-1);
  }
  else{
    int op=find_main_operator(p,q);
    printf("%d\n",op);
    uint32_t val1=eval(p,op-1);
    uint32_t val2=eval(op+1,q);
    printf("%s %d\n",tokens[2].str,atoi(tokens[2].str));
    switch (tokens[op].type){
      case '+': return val1+val2;
      case '-': return val1-val2;
      case '*': return val1*val2;
      case '/': return val1/val2;
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

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  return eval(0,nr_token-1);
}

