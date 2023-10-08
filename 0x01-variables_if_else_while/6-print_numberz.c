#include <stdio.h>

/**
*main - printing 0123456789 but using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');

return (0);
}