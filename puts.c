#include "main.h"

/**
 * _puts - Print a string to standard output
 *
 * @str: input parameter
 * Return: the length of a string
 */

int _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}
