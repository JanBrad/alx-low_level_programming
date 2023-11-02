#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc(unsigned int nmemb, unsigned int size - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: number of bytes ineach element
 *
 * Return: pointer to the allocated memory 
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

int *x;
unsigned int y;
int k[1];

if (nmemb == 0 || size == 0)
{
return (NULL);
}

x = malloc(nmemb * size);

if (x == NULL)
{
return (NULL);
}

while (y < nmemb)
{
*x = k[y];
y++;
}

return (x);
}
