#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define SPRINT_BUF_SIZE 32768
static char sprint_buf[SPRINT_BUF_SIZE];

//static int skip_atoi(const char **s)
//{
//	int i, c;
//
//	for (i = 0; ('0' <= (c = **s)) && (c <= '9'); ++*s)
//		i = i * 10 + c - '0';
//	return i;
//}

static char *number(char *str, unsigned long long num, int base)
{
	const char *digits = "0123456789abcdefghijklmnopqrstuvwxyz";

	if (num == 0)
		*str++ = '0';
	else
		while (num != 0)
		{
			*str++ = digits[num % base];
			num /= base;
		}

	return str;
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
	// panic("Not implemented");
	unsigned long long num;
	int base; // 进制
	char *str;
	const char *s;

	int qualifier; // l,ll

	for (str = out; *fmt; ++fmt)
	{
		if (*fmt != '%')
		{
			*str++ = *fmt;
			continue;
		}

		++fmt; // skip the first '%'

		qualifier = -1;
		if (*fmt == 'l' && *(fmt + 1) == 'l')
		{
			qualifier = 'q'; // ll
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
			*str++ = (unsigned char)va_arg(ap, int);
			continue;
		case 's':
			s = va_arg(ap, char *);
			if (!s)
				s = NULL;
			strcpy(str, s);
			continue;
		case '%':
			*str++ = '%';
			continue;
		case 'o':
			base = 8;
			break;
		case 'x':
			base = 16;
			break;
		case 'b': // maybe need
			base = 2;
			break;
		case 'd':
			break;

		default:
			assert(0);
		}

		if (qualifier == 'l')
		{
			num = va_arg(ap, unsigned long);
		}
		else if (qualifier == 'q')
		{
			num = va_arg(ap, unsigned long long);
		}
		else
		{
			num = va_arg(ap, unsigned int);
		}
		// putch(num/10+'0');
		// putch(num%10+'0');
		// putch('\n');
		str = number(str, num, base);
	}
	*str = '\0';
	return str - out;
}

int sprintf(char *out, const char *fmt, ...)
{
	// panic("Not implemented");
	va_list ap;
	int i;
	va_start(ap, fmt);
	i = vsprintf(out, fmt, ap);
	va_end(ap);
	return i;
}

int printf(const char *fmt, ...)
{
	va_list ap;
	int n;
	va_start(ap, fmt);
	n = vsprintf(sprint_buf, fmt, ap);
	if (n > SPRINT_BUF_SIZE)
	{
		printf("****printf_buffer_overflow****\n");
		assert(0);
	}
	for (int i = 0; i < n; i++)
	{
		putch(sprint_buf[i]);
	}
	va_end(ap);
	return n;
}

int snprintf(char *out, size_t n, const char *fmt, ...)
{
	panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
	panic("Not implemented");
}
#endif