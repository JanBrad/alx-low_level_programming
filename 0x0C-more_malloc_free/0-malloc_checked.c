#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes to be allocated
 *
 * Return: pointer to malloc, otherwise 98 upon failure
 */

void *malloc_checked(unsigned int b)
{

int *x;

x = malloc(b);

if (x == NULL)
{
exit(98);
}

return (x);
}
