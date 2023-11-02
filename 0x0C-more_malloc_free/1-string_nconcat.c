#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes from s2 to concatenate with s1
 *
 * Return: Pointer to concatenated string, or NULL on failure
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
x[k] = '\0';
return (x);
}
