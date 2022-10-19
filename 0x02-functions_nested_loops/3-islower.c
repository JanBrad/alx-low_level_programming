#include "main.h"

/**
 *_islower - checks code
 *
 *@c: parameter value
 *
 *Return: returns 1 if lowercase. Returns 0 if otherwise
 */

int _islower(int c)
{

if ('a' <= c && 'z' >= c)
{

return (1);
}
return (0);
}

