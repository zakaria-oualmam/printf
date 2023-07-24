#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -2147483648);
	printf("Negative:[%d]\n", -2147483648);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("%b\n", 98);
	_printf("Unknown:[%r]\n");
	_printf("Unknown:[%r]\n);

	// print numbers from 1 to 10

	int result1, result2, result3;
	long int l;
	_printf("%d\n", 1024);
	result1 = printf("%d", 1024);
	printf(" -- result: %d\n", result1);

	_printf("%d\n", -1024);
	result2 = printf("%d", -1024);
	printf(" -- result: %d\n", result2);

	_printf("%d\n", 0);
	result3 = printf("%d", 0);
	printf(" -- result: %d\n", result3);

	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);

	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);

	//_printf("%d\n", l); where l is a long int equals to INT_MAX + 1024
	l = (long int) INT_MAX + 1024;
	printf("%d\n", l);

	//_printf("%d\n", l); where l is a long int equals to INT_MIN - 1024
	l = (long int) INT_MIN - 1024;
	printf("%d\n", l);

	_printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("There is %d bytes in %d KB\n", 1024, 1);

	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d - %d = %d\n", 1024, 2048, -1024);

	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	_printf("%i\n", 1024);
	printf("%i\n", 1024);

	_printf("%i\n", -1024);
	printf("%i\n", -1024);

	_printf("%i\n", 0);
	printf("%i\n", 0);

	_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MAX);

	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);

	//_printf("%i", l); where l is a long int equals to INT_MAX + 1024
	l = (long int) INT_MAX + 1024;
	printf("%i\n", l);

	//_printf("%i\n", l); where l is a long int equals to INT_MIN - 1024
	l = (long int) INT_MIN - 1024;
	printf("%i\n", l);

	_printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("There is %i bytes in %i KB\n", 1024, 1);

	_printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("%i - %i = %i\n", 1024, 2048, -1024);

	_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	_printf("%d == %i\n", 1024, 1024);
	printf("%d == %i\n", 1024, 1024);

	_printf("iddi%diddiiddi\n", 1024);
	printf("iddi%diddiiddi\n", 1024);

	_printf("%d\n", 10000);
	printf("%d\n", 10000);

	_printf("%i\n", 10000);
	printf("%i\n", 10000);

	return 0;
}

