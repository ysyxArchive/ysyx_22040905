#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)


#define ZEROPAD	1		  /* pad with zero 填补0*/
#define SIGN	  2		  /* unsigned/signed long */
#define PLUS	  4		  /* show plus 显示+*/
#define SPACE	  8		  /* space if plus 加上空格*/
#define LEFT	  16		/* left justified 左对齐*/
#define SPECIAL	32		/* 0x /0*/
#define LARGE	  64		/* 用 'ABCDEF'/'abcdef' */
#define SPRINT_BUF_SIZE 32768
static char sprint_buf[SPRINT_BUF_SIZE];

size_t strnlen(const char * s, size_t count)
{
	const char *sc;

	for (sc = s; count && (*sc) != '\0'; sc++,count--);
	return sc - s;
}


static int skip_atoi(const char **s)
{
	int i, c;

	for (i = 0; ('0' <= (c = **s)) && (c <= '9'); ++*s)
		i = i*10 + c - '0';
	return i;
}

static char * number(char * str, unsigned long long num, int base, int size, int precision, int type)
{
	char c,tmp[66];
	int i;
	c = (type & ZEROPAD) ? '0' : ' ';
	
	
	i = 0;
	if (num == 0)
		tmp[i++]='0'; 
	else while (num != 0) 
    {
		tmp[i++] = num%base;
		num /= base;
	}
	if (i > precision)
		precision = i;
	size -= precision;

	while(size-->0)
		*str++ = ' ';
    
	while (size-- > 0)
		*str++ = c;
	while (i < precision--)
		*str++ = '0';
	while (i-- > 0)
	{	*str++ = tmp[i];
		putch(tmp[i]+'0');
	}
	while (size-- > 0)
		*str++ = ' ';
	return str;
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
  	//panic("Not implemented");
	int len;
	unsigned long long num;
	int i;
	int base;	//进制
	char * str;
	const char *s;

	int flags;		
	
	int field_width;	//宽度
    int precision;		//精度
	int qualifier;		//l,ll
    
    
	for (str=out ; *fmt ; ++fmt) 
    {
		if (*fmt != '%') 
        {    
			*str++ = *fmt;
			continue;
		}
        
		//after find %
		flags = 0;

		++fmt;				//skip the first '%'

		field_width = -1;
		if (('0' <= (*fmt)) && ((*fmt) <= '9'))
			field_width = skip_atoi(&fmt);  

		precision = -1;
		if (*fmt == '.') 
        {
			++fmt;	
			if ('0' <= *fmt && *fmt <= '9')
				precision = skip_atoi(&fmt);
		}
	
		qualifier = -1;
		if (*fmt == 'l' && *(fmt + 1) == 'l') 
        {
			qualifier = 'q';//ll
			fmt += 2;
		} 
		else if (*fmt == 'l') 
        {
			qualifier = *fmt;
			++fmt;
		}
	
		
		base = 10;
		switch (*fmt) 
        {
		case 'c':
			if (!(flags & LEFT))//whitout '-'
				while (--field_width > 0)
					*str++ = ' ';
			*str++ = (unsigned char) va_arg(ap, int);
			while (--field_width > 0)
				*str++ = ' ';
			continue;
	
		case 's':
			s = va_arg(ap, char *);
			if (!s) s = NULL;
                
			len = strnlen(s, precision);
	
			if (!(flags & LEFT))
				while (len < field_width--)
					*str++ = ' ';
			for (i = 0; i < len; ++i)
				*str++ = *s++;
			while (len < field_width--)
				*str++ = ' ';
			continue;
	
		case 'p':
			if (field_width == -1) 
            { 
				field_width = 2*sizeof(void *);
				flags |= ZEROPAD;
			}
			str = number(str,(unsigned long) va_arg(ap, void *), 16,field_width, precision, flags);
			continue;
	
		case '%':
			*str++ = '%';
			continue;
	
		case 'o':
			base = 8;
			break;
	
		case 'X':
			flags |= LARGE;
		case 'x':
			base = 16;
			break;

		case 'b':	//maybe need
			base = 2;
			break;
	
		case 'd':	
		case 'i':
			flags |= SIGN;
		case 'u':	
			break;
	
		default: assert(0);
		}

		if (qualifier == 'l') 
        {
			num = va_arg(ap, unsigned long);
		} else if (qualifier == 'q') 
        {
			num = va_arg(ap, unsigned long long);
		}else 
        {
			num = va_arg(ap, unsigned int);
		}
		//putch(num/10+'0');
		//putch(num%10+'0');
		//putch('\n');
		str = number(str, num, base, field_width, precision, flags);
	}
	*str = '\0';
	return str-out;
}

int sprintf(char * out, const char *fmt, ...)
{
  //panic("Not implemented");
	va_list ap;
	int i;
	va_start(ap, fmt);
	i=vsprintf(out,fmt,ap);
	va_end(ap);
	return i;
}

int printf(const char *fmt, ...)
{
  va_list ap; 
  int n;
  va_start(ap, fmt);
  n = vsprintf(sprint_buf, fmt, ap);
  if(n>SPRINT_BUF_SIZE){
	printf("****printf_buffer_overflow****\n");
	assert(0);
  }
  for(int i=0;i<n;i++){
    putch(sprint_buf[i]);
  }
  va_end(ap);
  return n;
}

/*char *number(char *str,int num){
  char ss[100]={0};
  int len=0;
  do{
    ss[len++]=num%10+'0';
    num/=10;
    if(len>=100){
      printf("****number_buffer_overflow****\n");
    }
  }while(num>0);
  for(int i=0;i<len;i++){
    *str++=ss[len-i-1];
  }
  return str;
}

static char buf[32768];  
int printf(const char *fmt, ...) {
  va_list ap;
  int len=0;
  va_start(ap,fmt);
      case 'd':
  len=vsprintf(buf,fmt,ap);
  va_end(ap);
  if(len>32768){printf("****printf_buffer_overflow****\n");return 0;}
  for(int i=0;i<len;i++){
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
*/
#endif
