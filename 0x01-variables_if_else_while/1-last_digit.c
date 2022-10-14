#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main -
 *
 *Return:
 */

int main(void)
{
int n;
int x = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, x);
}

else if (x == 0)
{
printf("Last digit of %d is %d and is zero", n, x);
}

else
{
printf("Last digit of %d is %d and is lass than 6 and is not zero", n, x);
}

return (0);
}
