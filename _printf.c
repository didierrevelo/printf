#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - print anything
 * @format: arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argument;
	const char *g;
	int num = 0;

	if (format == NULL)
		return (-1);
	va_start(argument, format);
	for (g = format; *g; g++)
	{
		if (*g == '%' && *g + 1 == '%')
		{
			_putchar(*g), num++;
			continue;
		}
		else if (*g == '%' && *g + 1 != '%')
		{
			switch (*++g)
			{
				case 's':
					num += fun_string(argument);
					break;
				case 'c':
					num += fun_character(argument);
					break;
				case '%':
					_putchar('%'), num++;
					break;
				case '\0':
					return (-1);
				case 'i':
				case 'd':
					num += fun_integer(argument);
					break;
				default:
					_putchar('%'), _putchar(*g), num += 2;
			}
		}
		else
			_putchar(*g), num++;
	}
va_end(argument);
return (num);
}