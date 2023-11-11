#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 *
 * @separator: pointer to string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

va_list x;
unsigned int y;
char *z;
int i;

y = 0;
i = 0;

va_start(x, n);

while (y < n)
{
z = va_arg(x, char*);

if (z != NULL)
{
printf("%s", z);
}
if (z == NULL)
{
printf("(nil)");
}
y++;

if (separator != NULL && y != n)
{
printf("%s", separator);
}
i++;
}
va_end(x);
printf("\n");
}
