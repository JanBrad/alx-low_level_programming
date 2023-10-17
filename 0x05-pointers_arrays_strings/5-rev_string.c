#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to a NULL terminated string
 *
 * return: void
 */

void rev_string(char *s)
{

int x;
int y;
char store;

x = 0;
y = 0;

while (s[x] != '\0')
{
x++;
}

x--;

while (y < x)
{
store = *(s + y);
*(s + y) = *(s + x);
*(s + x) = store;

x--;
y++;
}
}
