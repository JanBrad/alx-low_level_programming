#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer to a char to have memory filled
 * @b: constant byte that will fill memory
 * @n: first number if bytes that will fill memory of char pointed to by s
 *
 * return: a pointer to a char
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int x;


for (x = 0; x < n; x++)
{
s[x] = b;
}

return (s);
}
