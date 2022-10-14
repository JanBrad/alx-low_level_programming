#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** 
 *main - starting point
 *
 *Return: returns 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
int x = n % 10;
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}

else if (n % 10 == 0)
{
int x = n % 10;
printf("Last digit of %d is %d and is zero\n", n, x);
}

else
{
int x = n % 10;
printf("Last digit of %d is %d and is lass than 6 and is not zero\n", n, x);
}

return (0);
}
