#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: points to a string
 *
 * return: length of string
 */

int _strlen(char *s)
{

int x;

x = 0;

while (s[x] != '\0')
{
x++;
}
return x;
}
