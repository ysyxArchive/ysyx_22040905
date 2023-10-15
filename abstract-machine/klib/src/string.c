#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)


size_t strlen(const char *s) {
  //panic("Not implemented");
  assert(s!= NULL); 
  size_t idx=0;
  while(s[idx]!='\0') idx++;
  return idx;
}

char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  assert(dst != NULL && src != NULL); 
  char* r=dst;
  while((*r++ = *src++)!='\0');
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  //panic("Not implemented");
  assert(dst != NULL && src != NULL);  
  char *res = dst;  
  int offset = 0;  
  if (strlen(src) < n){  
    offset = n - strlen(src);  
    n = strlen(src);  
  }  
  while (n--) *dst++ = *src++;  
  while (offset--) *dst++ = '\0';  
  return res;  
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  strcpy (dst + strlen (dst), src); 
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
  const unsigned char *p1 = (const unsigned char *) s1;
  const unsigned char *p2 = (const unsigned char *) s2;
  unsigned char c1, c2;
  do {
    c1 = (unsigned char) *p1++;
    c2 = (unsigned char) *p2++;
    if(c1 == '\0')
        return c1 - c2;
  } while (c1 == c2);

    return c1 - c2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  //panic("Not implemented");
  unsigned char c1 = '\0';
  unsigned char c2 = '\0';
  if (n >= 4){
    size_t n4 = n >> 2;
    do{
    c1 = (unsigned char) *s1++;
    c2 = (unsigned char) *s2++;
    if (c1 == '\0' || c1 != c2)
                    return c1 - c2;
            c1 = (unsigned char) *s1++;
            c2 = (unsigned char) *s2++;
            if (c1 == '\0' || c1 != c2)
                    return c1 - c2;
            c1 = (unsigned char) *s1++;
            c2 = (unsigned char) *s2++;
            if (c1 == '\0' || c1 != c2)
                    return c1 - c2;
            c1 = (unsigned char) *s1++;
            c2 = (unsigned char) *s2++;
            if (c1 == '\0' || c1 != c2)
                    return c1 - c2;
    } while (--n4);
    n &= 3;
  }

  while (n > 0)
  {
          c1 = (unsigned char) *s1++;
          c2 = (unsigned char) *s2++;
          if (c1 == '\0' || c1 != c2)
                  return c1 - c2;
          --n;
  }

  return c1 - c2;
}

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
  char* t = (char *)s;
  
  while(n --){
    *t = c;
    t ++;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  //panic("Not implemented");
  if(dst == NULL || src == NULL) return NULL;
  char *dst1=(char *)dst;
  char *src1=(char *)src; 
  if(dst1<=src1||dst1>=src1+n){
    while(n--)
      *dst1++=*src1++;
  }
  else{
    dst1+=n-1;
    src1+=n-1;
    while(n--)
    *dst1--=*src1--;
  }
  return dst;
}


void *memcpy(void *out, const void *in, size_t n) {
  //panic("Not implemented");
  if(out == NULL || in == NULL) return NULL;

  int* out1 = (int *)out;
  int* in1 = (int *)in;


  int loop_cnt = n >> 2;
  int rem = n & 3;
  
  while(loop_cnt --){
    *out1 = *in1;
    out1 ++;
    in1 ++;
  }
  if(rem){
    char *s = (char *)out1;
    char *t = (char *)in1;
    while(rem --){
      *s = *t;
      s ++;
      t ++;
    }
  }
  return out;
} 

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
  if (!n) return(0);
  while ( --n && *(char *)s1 == *(char *)s2)
  {
    s1 = (char *)s1 + 1;
    s2 = (char *)s2 + 1;
  }
  return( *((unsigned char *)s1) - *((unsigned char *)s2) );
}


#endif
