#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	const char *str;

	va_start(args, format);
	str = format;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			/* (*str == '%')*/
				
		}
		_putchar(*str++);
	}
	va_end(args);
	return (0);
}
