#include <stdio.h>

/**
*main - printing different combination of two digits
*Return: Always 0 (Success)
*/

int main(void)
{
int hundred, ten, one;
for (hundred = '0'; hundred <= '7'; hundred++)
{
for (ten = hundred + 1; ten <= '8'; ten++)
{
for (one = ten + 1; one <= '9'; one++)
{
putchar(hundred);
putchar(ten);
putchar(one);

if (hundred != '7' || ten != '8' || one != '9')
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}
