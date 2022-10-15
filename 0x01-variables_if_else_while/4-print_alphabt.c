#include <stdio.h>

int main(void)
{
char x = 'a';

while (x < 'e')
{
putchar(x);
x++;
}

while (x < 'q')
{
putchar(x);
x++;
}

while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
