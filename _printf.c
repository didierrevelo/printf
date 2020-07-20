#include "holberton.h"
/**
 * _printf - print anything
 * @format: arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int num_char;
	all_t l_funct[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		{NULL, NULL}
	};
	va_list arg;

	if (format == NULL)
	{
		return (-1);
	}
	va_star(arg, format);
	num_char = compar(format, l_funct, arg);
	va_end (arg);
	return (num_char);
}