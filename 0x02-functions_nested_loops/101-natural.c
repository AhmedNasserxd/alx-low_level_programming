#include <stdio.h>

/**
*main - to print sum of multiplies of 3 or 5
*Return: Always 0 (Success)
*/

int main(void)
{
int x;
int sum = 0;

for (x = 0; x <= 1023; x++)
{
if ((x % 3 == 0) || (x % 5 == 0))
sum += x;
}
printf("%d\n", sum);
return (0);
}
