#include "main.h"
#define NULL ((void *) 0)

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to the string to be searched
 * @accept: pointer to the set of bytes to be compared with the string
 *
 * Return: pointer to the first occurrence of byte that matches any byte in accept
 */


char *_strpbrk(char *s, char *accept)
{

int x;
int y;

x = 0;

while (s[x] != '\0')
{

y = 0;
while (accept[y] != '\0')
{

if (s[x] == accept[y])
{

return (s + x);
}
y++;
}
x++;
}

return (NULL);
}
