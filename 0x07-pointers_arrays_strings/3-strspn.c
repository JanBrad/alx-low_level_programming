#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Pointer to the string with the prefix substring.
 * @accept: Bytes that must be counted in the prefix substring.
 *
 * Return: Number of bytes in the initial segment of s.
 */


unsigned int _strspn(char *s, char *accept)
{

int x;
int y;
int k;
int w;

x = 0;
k = 0;
w = 0;

while (accept[k] != '\0')
{
k++;
}

while (s[x] != ' ')
{

for (y = 0; y < k; y++)
{

if (s[x] == accept[y])
{

w++;
}
}
x++;
}
return (w);
}


