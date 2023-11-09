#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: pointer to string between numbers
 * @n: number of arguments to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list x;
unsigned int y ;
unsigned int z;

y = 0;

va_start(x, n);

while (y < n)
{
z = va_arg(x, int);
printf("%d", z);
y++;

if (separator != NULL && y != n)
{
printf("%s", separator);
}
}
va_end(x);
printf("\n");
}

