#include "main.h"

/**
 * print_int - prints int
 * @params: <int> types to print
 *
 * Return: num of int printed
 */

int print_int(va_list params)
{
	int n = va_arg(params, int);
	int count = count_digits(n);

	print_num(n);
	return (count);
}

/**
 * print_num - prints integers
 * @n: integer to print
 */

void print_num(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		print_num((num /10));
	_putchar((num % 10) + '0');
}

/**
 * count_digits - counts the number of digits in a number
 * @n - number to be counted
 */

int count_digits(int n)
{
	int count;

	if (n == 0)
		return (1);

	count = 0;

	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	
	return (count);
}
