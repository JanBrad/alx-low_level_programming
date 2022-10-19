#include "main.h"

/**
 *_islower - checks code
 *
 *Return: returns 1 if lowercase. Returns 0 if otherwise
 */

int _islower(int c)
{

char caps[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int x = 0;

while (x < 26)
{

while (caps[x] == c)
{

return (1);
x++;
}
}

