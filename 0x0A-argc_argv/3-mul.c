#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: Number of arguments passed
 * @argv: Pointer to an array of pointers to arguments
 *
 * Return: 0 (Success), otherwise 1 (Error)
 */

int main(int argc __attribute__((unused)), char *argv[])
{

int x;

if (argv[1] == NULL || argv[2] == NULL)
{

printf("Error\n");

return (1);
}

else
{

x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);

return (0);
}

}
