#include "main.h"

/**
 * get_func - find associated function to format `_printf`
 *
 * @format: format (<char>, <string>, <float>, <int>)
 *
 * Return: function (Success) || NULL (Fail)
 */

int (*get_func(const char *format))(va_list)
{
	unsigned int idx = 0;

	op_t funcs[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_int},
		{"d", print_int},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_alpha_hex},
		{NULL, NULL}
	};

	while (funcs[idx++].s)
		if (funcs[idx].s[0] == (*format))
			return (funcs[idx].f);

	return (NULL);
}

/**
 * _printf - print to the console
 *
 * @format: <array> to print && checks type (format)
 *
 * Return: <int> count of char printed
 */

int _printf(const char *format, ...)
{
	int count, idx = 0;
	int (*f)(va_list);
	va_list params;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	count = 0;
	va_start(params, format);
	while (format[idx])
	{
		while (format[idx] != '%' && format[idx])
			count += _putchar(format[idx++]);

		if (format[idx] == '\0')
			break;

		f = get_func(&format[idx + 1]);
		if (f != NULL)
		{
			count += f(params);
			idx += 2;
			continue;
		}

		if (!format[idx + 1])
			return (-1);

		_putchar(format[idx]);
		count++;

		if (format[idx + 2] == '%')
		{
			idx += 2;
			continue;
		}

		idx++;
	}
	va_end(params);
	return (count);
}
