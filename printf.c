#include "main.h"
/**
 * _printf - A function that produces an output according to a format.
 * format - A format in which argument will be printed.
 *          Supported format specifiers are %c, %s, and %%.
 * Return: The number of characters printed,
 *         and -1 in case of an error.
 */
int _printf( const char *format, ...)
{
	int current_count = 0, i;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
	return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
	e_char(format[++i], args, &current_count);
	}
	else
	{
	p_write(1, &format[i], 1);
	current_count++;
	}
	}

	va_end(args);
	return (current_count);
}
