#include <stdio.h>

/**
 * main - main function
 *
 * Returns: Always 0(Success)
 */

int main(void)
{
printf("Sizeof a char: %zu byte(s)\n", sizeof(char));
printf("Sizeof an int: %zu byte(s)\n", sizeof(int));
printf("Sizeof a long int: %zu byte(s)\n", sizeof(long int));
printf("Sizeof a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Sizeof a float: %zu byte(s)\n", sizeof(float));

return (0);
}
