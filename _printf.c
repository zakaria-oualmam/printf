#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: The format string containing placeholders.
 *
 * Return: The total number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	const char *str;
	int count = 0;

	va_start(args, format);
	str = format;
	while (*str)
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
					count += _print_int(va_arg(args, int));
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
