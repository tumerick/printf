#include "main.h"

/**
 * print_c - print characters with (%c)
 *
 * @params: <array> of <char> types to print
 *
 * Return: <int> num of params printed
 */

int print_c(va_list params)
{
	int _char = va_arg(params, int);

	return (_putchar(_char));
}

/**
 * print_s - print a string with (%s)
 *
 * @params: <array> of characters
 *
 * Return: <int> num of params printed
 */

int print_s(va_list params)
{
	char *string;
	string = va_arg(params, char *);

	return (_puts(string));
}

/**
 * _puts - prints a string
 * @str: pointer to the string to print
 * Return: number of chars printted
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
