#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *str);
void print_number(int n);
int print_int(int n);
int number_len(int i);
int print_binary(unsigned int n);
int handle_format(va_list arg, char specifier);

#endif
