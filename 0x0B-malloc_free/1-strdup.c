#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copies of the string given as a parameter
 *
 * @str: pointer to a string
 *
 * Return: pointer to a string
 */

char *_strdup(char *str)
{

char *x;
int y;
int k;

y = 0;
k = 0;

while (str[y] != '\0')
{

y++;
}

x = malloc(sizeof(char) * y);

if (x == NULL)
{

return (NULL);
}

while (k < y)
{

x[k] = str[k];
k++;
}

return (x);

free(x);

}
