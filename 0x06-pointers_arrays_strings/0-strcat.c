#include "main.h"

/**
 * _strcat - concatenates two strings 
 *
 * @dest: pointer to the destination array
 *
 * @src: pointer to array that will be appended to the sestination array
 *
 * return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{

int s;
int k;
int x;
int y;

while (dest[x] != '\0')
{
x++;
}

x--;
s = x;

while (src[k] != '\0')
{
k++;
}

while (x < s + k)
{

x++;

dest[x] = src[y];
y++;
}

return (dest);
}
