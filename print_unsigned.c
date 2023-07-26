#include "main.h"

/**
 * print_unsigned - Prints an integer and returns its length.
 * @n: The integer to be printed.
 *
 * Return: The number of characters in the integer.
 */

int print_unsigned(unsigned int n)
{
	char *str = ntos(n, 10, 0);
	return (_puts(str));
}
