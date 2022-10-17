#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 *
 * @c: <char> to print
 *
 * Return: 1 (Success) || -1 (Fail)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
