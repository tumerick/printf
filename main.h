#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct op
{
	char *s;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);

int print_c(va_list params);
int print_s(va_list params);

int print_int(va_list params);
void print_num(int n);
int count_digits(int n);

char *convert(unsigned long int num, int base, int lowercase);
int print_binary(va_list params);
int print_octal(va_list params);
int print_hex(va_list params);
int print_alpha_hex(va_list params);

#endif
