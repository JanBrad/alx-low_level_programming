#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination array for copied memory
 * @src: src array for copied memory
 * @n: number of chars to be copied into dest
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int x;

for (x = 0; x < n; x++)
{
dest[x] = src[x];
}

return (dest);
}
