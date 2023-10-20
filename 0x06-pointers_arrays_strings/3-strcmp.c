#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * * Return:
 *  - Negative integer if s1 is less than s2.
 *  - Zero if s1 is equal to s2.
 *  - Positive integer if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{

int x;
int y;

x = 0;
y = 0;

while (s1[x] != '\0')
{
x++;
}

while (s2[y] != '\0')
{
y++;
}

if (x > y)
{
return (15);
}

else if (x < y)
{
return (-15);
}

else
{
return (0);
}
}
