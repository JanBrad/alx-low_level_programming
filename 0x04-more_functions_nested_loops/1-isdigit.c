#include "main.h"

/**
 * _isdigit - Checks if a character is uppercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{

char num[] = "0123456789";

int x = 0;
char y;
y = '9';

while (num[x]<= y)
{

if (num[x] == c)
{
return (1);
}
x++;
}
return (0);
}
