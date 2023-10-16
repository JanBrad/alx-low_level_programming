#include "main.h"

/**
 * swap_int - swaps the values of two integers it points to
 *
 * @a: points to an integer
 *
 * @b: points to an integer
 *
 * return: void
 */

void swap_int(int *a, int *b)
{

int x;

x = *a;

*a = *b;

*b = x;

}
