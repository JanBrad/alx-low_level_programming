#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 *
 * @size: number of bytes array will hold
 * @c: character that will occupy the array
 *
 * Return: pointer to an array of chars
 */

char *create_array(unsigned int size, char c)
{

char *x;
unsigned int y;

y = 0;
x = malloc(sizeof(char) * size);

if (size == 0 || x == NULL)
{

return (NULL);
}

while (y < size)
{

x[y] = c;
y++;
}

return (x);

}
