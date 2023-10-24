#include "main.h"
#define NULL ((void *) 0)

/**
 * _strstr -  locates a substring
 *
 * @haystack: pointer to string that may contain substring to be located
 * @needles: pointer to string identifying substring to be located
 *
 * return: pointer to the beginning of the located substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{

int x;
int y;

x = 0;

while (haystack[x] != '\0')
{

y = 0;

while (haystack[x] != ' ' && haystack[x] != '\0')
{

/*str[y] = haystack[x];*/

if (needle[y] == haystack[x])
{

return (haystack - x);
}
x++;
y++;
}

x++;
}

return (NULL);
}
