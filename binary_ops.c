#include "main.h"

/**
 * convert - convert number to base then string
 * @num: number to be converted
 * @base: base 
 * @lowercase: if hex needs to be lowercase
 *
 * Return: string value
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * print_hex = prints a number in hexadecimal. lowercase
 * @params: <array> of <char> types to print
 *
 * Return: string
 */

int print_hex(va_list params)
{
	unsigned int num = va_arg(params, unsigned int);
	char *str = convert(num, 16, 1);

	return (_puts(str));
}

/**
 * print_alpha_hex = prints a number in hexadecimal. uppercase
 * @params: <array> of <char> types to print
 *
 * Return: string
 */

int print_alpha_hex(va_list params)
{
        unsigned int num = va_arg(params, unsigned int);
        char *str = convert(num, 16, 0);

        return (_puts(str));
}

/*
 * print_binary - prints a number in base 2
 * @params: <array> of <char> types to print
 *
 * Return: string
 */

int print_binary(va_list params)
{
	unsigned int num = va_arg(params, unsigned int);
	char *str = convert(num, 2, 0);

	return (_puts(str));
}

/**
 * print_octal - prints a number in base 8
 * @params: <array> of <char> types to print
 *
 * Return: string
 */
int print_octal(va_list params)
{
	unsigned int num = va_arg(params, unsigned int);
	char *str = convert(num, 8, 0);

	return (_puts(str));
}
