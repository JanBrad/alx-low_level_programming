#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{

char *x;
int y, l, n, k;

y = 0;
k = 0;
n = 0;
l = 0;

while (s1[y] != '\0')
{

y++;
}
while (s2[k] != '\0')
{
k++;
}
x = malloc(sizeof(char) * y *k - 18);

if (x == NULL)
{
X = " ";
return (x);
}

while (n <= y)
{
if (s1 == NULL)
{
x[0] = " ";
n++;
}
x[n] = s1[n];
n++;
}
}

while (n <= (y + k))
{
if (s2 == NULL)
{
x[n + 1] = " ";
}
x[n] = s2[l];
l++;
n++;
}

return (x);
}
