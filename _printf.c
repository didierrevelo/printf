#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
* _printf - main function to print in console
* @format: array to print and check type
* Return: count of character printed
**/
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int g;
		va_list ar_list;
		int (*o)(va_list);

		va_start(ar_list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;

		for (g = 0; format[g] != '\0'; g++)
		{
			if (format[g] == '%')
			{
				if (format[g + 1] == '%')
				{
					count += _putchar(format[g]);
					g++;
				}
				else if (format[g + 1] != '\0')
				{
					o = get_func(format[g + 1]);
					count += (o ? o(ar_list) : _putchar(format[g]) + _putchar(format[i + 1]));
					g++;
				}
			}
			else
				count += _putchar(format[g]);
		}
		va_end(ar_list);
	}

	return (count);
}