#include <stdio.h>

/**
*main - printing 0~9 separated by commas with putchar
*Return: Always 0 (Success)
*/

int main(void)
{
int num = '0';

while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');

return(0);
}
