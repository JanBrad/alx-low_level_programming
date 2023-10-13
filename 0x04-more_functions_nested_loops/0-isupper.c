#include "main.h"

/**
 * _isupper - checks if letter is uppercase
 *
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{

char alphauppr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char alphalwr[] = "abcdefghijklmnopqrstuvwxyz"

int x;

while (alphauppr[x] != c)
{

if (x == 25)
{
return (0);
}
x++;
}

while (alphalwr[x] != c)
{

if (x == 25)
{
return (1);
}
x++;
}
}
