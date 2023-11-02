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

y = 0, k = 0, n = 0, l = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[y] != '\0' && s1 != NULL)
{
y++;
}
while (s2[k] != '\0' && s2 != NULL)
{
k++;
}
x = malloc(sizeof(char) * (y + k + 1));

if (x == NULL)
{
return (NULL);
}
while (n < y)
{
x[n] = s1[n];
n++;
}
while (n < (y + k))
{
x[n] = s2[l];
l++;
n++;
}
return (x);
}
