#include "main.h"

/**
 * handle_format - handles different specifiers
 * @specifier: the specifier
 * @arg: argument
 * Return: counter
 */

int handle_format(va_list args, char specifier)
{
	int counter = 0;

	switch (specifier)
	{
		case 'c':
				counter += _putchar(va_arg(args, int));
				break;
		case 's':
				counter += _puts(va_arg(args, char *));
				break;
		case '%':
				counter += _putchar('%');
				break;
		case 'd':
		case 'i':
				counter += print_int(va_arg(args, int));
				break;
		case 'b':
				counter += print_binary(va_arg(args, unsigned int));
				break;
		default:
				_putchar('%');
				_putchar(specifier);
				counter += 2;
				break;
	}
	return (counter);
}
