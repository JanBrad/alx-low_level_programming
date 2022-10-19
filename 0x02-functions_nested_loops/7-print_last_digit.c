#include "main.h"

/**
 *print_last_digit - checks code
 *
 *@x: parameter value
 *
 *Return: Returns the value of the last digit x
 */

int print_last_digit(int x)
{

if (x >= 0)
{

int n = 0;

while (n < 2)
{
int y = (x % 10) * 11;

return (y);
}
}

else if (x < 0)
{

int n = 0;

while (n < 2)
{
int y = (x % (-10)) * 11;

return (y);
}
}

return (0);
}
