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
	int idx, count = 0;

	string = va_arg(params, char *);

	if (!string)
		string == "(null)";

	idx = 0;
	while (string[idx++])
		count += _putchar(string[idx]);

	return (count);
}
