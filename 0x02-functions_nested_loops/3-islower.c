#include "main.h"

/**
 * _islower - checks if function is lowercase char
 *
 * Return: Always 0 (Not lowercase) or 1 (Lowercase)
 */

int _islower(int c)
{
char lwrcase[] = "abcdefghijklmnopqrstuvwxyz";
char upprcase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int x = 0;

while (lwrcase[x] != c)
{

if (upprcase[x] == c)
{
return (0);
}
x++;
}

while (upprcase[x] != c)
{

if (lwrcase[x] == c)
{
return (1);
}

else if (c != lwrcase[x] && c != upprcase[x])
{
return (1);
}
x++;
}
}
