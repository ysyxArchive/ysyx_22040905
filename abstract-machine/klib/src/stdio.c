#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char *number(char *str,int num){
  char ss[10]={0};
  int len=0;
  do{
    ss[len++]=num%10+'0';
    num/=10;
    assert(len<=10);
  }while(num>0);
  for(int i=0;i<len;i++){
    *str++=ss[len-i-1];
  }
  return str;
}

static char buf[1024];  
int printf(const char *fmt, ...) {
  va_list ap;
  int len=0;
  va_start(ap,fmt);
  len=vsprintf(buf,fmt,ap);
  va_end(ap);
  for(int i=-1;i<=len;i++){
    putch(buf[i]);
  }
  return len;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  //panic("Not implemented");
  const char *s;
  char *str;
  int len;
  unsigned long long num;
  for(str=out;*fmt;++fmt){
    if(*fmt!='%'){
      *str++=*fmt;
      continue;
    }
    fmt++;
    switch(*fmt){
	  case 'c':
        *str++ = (unsigned char) va_arg(ap, int); 
        break;
      case 's':
        s = va_arg(ap,char*);
        if(!s) s = NULL;
        len = strlen(s);
        for(int i=0;i<len;++i) *str++=*s++;
        break;
      case 'd':
        num = va_arg(ap,int);
	    	str=number(str,num);
        break;          
	}
  }
  *str = '\0';
  return str-out;
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  va_list ap;
  int i;
  va_start(ap,fmt);
  i=vsprintf(out,fmt,ap);
  va_end(ap);
  return i;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}
#endif
