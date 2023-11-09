/**
 * int_index - returns index of searched integer
 *
 * @array: pointer to an array
 * @size: number of elements in array
 * @(*cmp)(int): pointer to function that compares integer
 *
 * Return: index of matching integer, otherwise -1 if array is empty or no matches occur
 */

int int_index(int *array, int size, int (*cmp)(int))
{

int x;
int y;

x = 0;
y = 0;

if (size <= 0)
{
return (-1);
}

while (x < size)
{
y = cmp(array[x]);
if (y != 0)
{
return (x);
}
x++;
}

return (-1);

}

