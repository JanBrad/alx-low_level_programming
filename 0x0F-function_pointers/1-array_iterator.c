#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 *
 * @array: pointer to array 
 * @size: number of elements in array
 * @(*action)(int): pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

long unsigned int x;

x = 0;

while (x < size)
{

action(array[x]);
x++;
}
}
