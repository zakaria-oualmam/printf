#include "main.h"

/**
 * print_int - Prints an integer and returns its length.
 * @n: The integer to be printed.
 *
 * Return: The number of characters in the integer.
 */

int print_int(int n)
{
	print_number(n);
	return (number_len(n));
}
