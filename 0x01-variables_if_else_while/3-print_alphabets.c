#include <stdio.h>

/**
*main - printing lowercase and uppercase alphabet with putchar
*Return: Always 0 (Success)
*/

int main(void)
{
char upper = 'A';
char lower = 'a';

while (lower <= 'z')
{
putchar(lower);
lower++;
}

while (upper <= 'Z')
{
putchar(upper);
upper++;
}

putchar('\n');

return (0);
}
