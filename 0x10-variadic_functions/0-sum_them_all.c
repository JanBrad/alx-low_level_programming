#include <stdarg.h>

/**
 * sum_them_all - sums of all its parameters
 *
 * @n: number of arguments to be summed
 *
 * Return: an integer of summed up parameters
 */

int sum_them_all(const unsigned int n, ...)
{

va_list x;
int sum;
unsigned int y;

sum = 0;
y = 0;

va_start(x, n);

while (y < n)
{
sum += va_arg(x, int);
y++;
}

va_end(x);

return (sum);
}
