#include "main.h"

/**
 * _printf - produces output according to a format
 * @format:
 * @...:
 * Return: counter
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *str;
	int count = 0, space = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	str = format;
	while (*str != '\0')
	{
		if (*str == '%' || space)
		{
			str++;
			if (*str == ' ')
			{
				space = 1;
				count++;
				continue;
			}
			space = 0;
			count += handle_format(args, *str);
		}
		else
			count += _putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
