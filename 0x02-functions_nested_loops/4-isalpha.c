#include "main.h"

/**
 *_isalpha - checks code
 *
 *@c: parameter value
 *
 * Return: returns 1 if letter. Returns 0 if otherwise
 */

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
