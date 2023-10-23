#include "main.h"
#define NULL ((void *)0)

/**
 * _strchr - locates a character in a string
 *
 * @s: string to be searched for character
 * @c: character to be searched in string
 *
 * return: pointer to s
 */

char *_strchr(char *s, char c)
{

int x;

x = 0;

while (s[x] != '\0')
{

if (s[x] == c)
{
return (s + x);
}
x++;
}


if (s[x] == '\0' && s[x] == c)
{
return (s + x);
}

return (NULL);

}

