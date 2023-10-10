#include <stdio.h>

/**
*main - to print first 50 fibonacci
*Return: Always 0 (Success)
*/

int main(void)
{
long int y, w = 1, x = 2, sum;

for (y = 1; y <= 50; y++)
{
if (w != 20365011074)
printf("%ld, ", w);

else
printf("%ld\n", w);

sum = w + x;
w = x;
x = sum;
}
return (0);
}
