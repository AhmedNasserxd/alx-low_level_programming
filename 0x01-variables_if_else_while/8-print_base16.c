#include <stdio.h>

/**
*main - printing lowercase base 0123456789abcdef with putchar
*Return: Always 0 (Success)
*/

int main(void)
{
int num = '0';
int alpha = 'a';

while (num <= '9')
{
putchar(num);
num++;
}

while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}

putchar('\n');

return (0);
}
