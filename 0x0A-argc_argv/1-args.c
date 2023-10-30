#include <stdio.h>

/**
 * main - Entry point og program
 * @argc: Number of arguments passed
 * @argv: Pointer to an array of pointers to arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

int x;

x = 0;

argc--;

while (x < argc)
{

x++;
}

printf("%d\n", x);

return (0);
}
