#include "main.h"
#define NULL ((void *) 0)

char *_strpbrk(char *s, char *accept)
{

int x;
int y;

x = 0;

while (s[x] != '\0')
{

y = 0;
while (accept[y] != '\0')
{

if (s[x] == accept[y])
{

return (s + x);
}
y++;
}
x++;
}

return (NULL);
}
