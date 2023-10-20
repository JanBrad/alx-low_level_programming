#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to the buffer
 * @src: pointer to the string to be copied
 * @n: number of bytes to be copied
 *
 * return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{

int x;

x = 0;

while (src[x] != '\0' && x < n)
{

dest[x] = src[x];
x++;
}

while (x < n)
{
dest[x] = '\0';
x++;
}

return (dest);
}
