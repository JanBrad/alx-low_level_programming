#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to a null-terminated string
 *
 * Return: the number of characters in the string (excluding null byte)
 */

int _strlen(char *s)
{

int x;

x = 0;

while (s[x] != '\0')
{
x++;
}
return (x);
}
