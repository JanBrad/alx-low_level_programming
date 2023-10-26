#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 *
 * @s: pointer to an int variable that calls nd saves return value of _strlen_recursion
 *
 * return: an integer
 */

int _strlen_recursion(char *s)
{

if (*s == '\0')
{

return (0);
}

return 1 + _strlen_recursion(s + 1);
}
