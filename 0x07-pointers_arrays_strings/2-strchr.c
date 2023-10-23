#include "main.h"
#define NULL ((void *)0)

/**
 * _strchr - Locates a character in a string
 *
 * @s: String to be searched for character
 * @c: Character to be searched in the string
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found
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

