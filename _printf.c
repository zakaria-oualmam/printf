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
	int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	str = format;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			switch (*str)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += _puts(va_arg(args, char*));
					break;
				case '%':
					count += _putchar(*str);
					break;
				case 'd':
				case 'i':
					count += print_int(va_arg(args, int));
					break;
				case 'b':
					count += print_binary(va_arg(args, unsigned int));
					break;
			}
			str++;

		}
		count += _putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
