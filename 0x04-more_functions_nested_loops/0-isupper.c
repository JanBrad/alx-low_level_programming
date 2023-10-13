#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if @c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{

char alphauppr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char alphalwr[] = "abcdefghijklmnopqrstuvwxyz";

int x = 0;

while (alphauppr[x] != c)
{

if (alphalwr[x] == c)
{
return (0);
}
x++;
}

while (alphalwr[x] != c)
{

if (alphauppr[x] == c)
{
return (1);
}
x++;
}
return (0);
}
