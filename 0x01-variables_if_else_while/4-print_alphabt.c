#include <stdio.h>

int main(void)
{
char x = 'a';

while (x < 'e' || x > 'e' && x < 'q' || x > 'q' && x <= 'z')
{
putchar(x);
x++;
}

putchar('\n');
return (0);
}
