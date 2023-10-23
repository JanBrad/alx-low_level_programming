#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to a char where memory will be filled
 * @b: Constant byte that will fill memory
 * @n: Number of bytes to fill in the memory pointed to by s
 *
 * Return: A pointer to a char
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
