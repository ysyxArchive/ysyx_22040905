#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

char *int_to_str(char *str,int num){
  char *ret=str;
  char s[10]={0};
  int len=0;
  do{
    s[len++]=num%10+'0';
    num/=10;
    assert(len<=10);
  }while(num>0);
  for(int i=0;i<len;i++){
    *str++=s[len-i-1];
  }
  *str='\0';
  return ret;
}

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  //panic("Not implemented");
  char *s;
  char *str;
  int num,len;
  for(str=out;*fmt;++fmt){
    if(*fmt!='%'){
      *str++=*fmt;
      continue;
    }

    switch(*fmt){
      case 's':
        s = va_arg(ap,char*);
        if(!s) s = NULL;
        len = strlen(s);
        for(int i=0;i<len;++i) *str++=*s++;
        break;
      case 'd':
        num = va_arg(ap,int);
        int_to_str(s,num);
        len = strlen(s);
        for(int i=0;i<len;++i) *str++=*s++;
        break;
      case 'c':
        *str++ = (unsigned char) va_arg(ap, int); 
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
