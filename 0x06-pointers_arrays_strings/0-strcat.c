#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int y;
	int x;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}

