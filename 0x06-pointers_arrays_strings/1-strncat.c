#include "main.h"

/**
 * _strncat - concatenates dest with at most n bytes from src
 *
 * @dest: destination array
 * @src: array that will be conatenated with dest
 * @n: number of chars that will be concatenated from src to dest
 *
 * return: concatenated dest array
 */

char *_strncat(char *dest, char *src, int n)
{

int x;
int y;

x = 0;
y = 0;

while (dest[x] != '\0')
{
x++;
}

dest[x] = ' ';

while (src[y] != '\0' && y < n)
{

dest[x + y] = src[y];

y++;
}

dest[x + y] = '\0';


return (dest);
}
