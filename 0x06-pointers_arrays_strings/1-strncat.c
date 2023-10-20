#include "main.h"

/**
 * _strncat - Concatenate two strings with a limit on the number of characters
 *
 * @dest: The destination string to which the source will be concatenated
 * @src: The source string to be concatenated to dest
 * @n: The maximum number of characters to concatenate from src
 *
 * Return: A pointer to the resulting string dest
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
