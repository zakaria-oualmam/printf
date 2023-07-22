#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	const char *str;
	int count = 0;

	va_start(args, format);
	str = format;
	while (*str)
	{
		if (*str == '0')
		{
			str++;
			/* (*str == '%')*/
				
		}
		count += _putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
