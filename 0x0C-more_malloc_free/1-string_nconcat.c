#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @b: number of bytes from s2 concatenated with s1
 *
 * Return: pointer to a new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *x;
unsigned int y, l ,k;

y = 0, l = 0, k = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[y] != '\0')
{
y++;
}
x = malloc(y + n + 1);

if (x == NULL)
{
return(NULL);
}

while (k < y)
{
x[k] = s1[k];
k++;
}

while (l < n && s2[l] != '\0')
{
x[k] = s2[l];
k++;
l++;
}

return (x);
}

