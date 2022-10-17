#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct _format
{
	char *s;
	int (*f)(va_list);
} format_struct;

int _putchar(char c);
int _printf(const char *frmt, ...);

int print_c(va_list params);
int print_s(va_list params);

#endif
