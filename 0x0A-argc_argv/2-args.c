#include <stdio.h>

/**
 * main - Entry point of program
 * @argc: Number of arguments passed
 * @argv: Pointer to an array of pointers to arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

int x;

x = 1;

printf("%s\n", argv[0]);

if (argc > 1)
{

while (x < argc)
{
printf("%s\n", argv[x]);
x++;
}
}

return (0);
}
