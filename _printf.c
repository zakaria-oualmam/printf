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
		if (*str == '%')
		{
			str++;
			switch(*str)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
                                        count += _puts(va_arg(args, char*));
                                        break;
				case '%':
                                        count += _putchar(va_arg(args, int));
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
