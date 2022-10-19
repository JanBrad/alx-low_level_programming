#include "main.h"

/**
 *_abs - checks code
 *
 *@x: parameter value
 *
 *Returns: Absolut value of number x
 */

int _abs(int x)
{

int y = x * (-2);

if (x < 0)
{

int n = x + y;

return (n);
}

else if (x >= 0)
{
return (x);
}
return (0);
}
