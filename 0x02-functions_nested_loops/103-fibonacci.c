#include <stdio.h>
/**
*main - to print the sum of even fionacci sequence
*Return: Always 0 (Success)
*/

int main(void)
{
int sevens = 0, x = 1, z = 1, sum = 1;

while (z < 4000000)
{
sum = x + z;
x = z;
z = sum;
if ((sum <= 4000000) && (sum % 2 == 0))
sevens += sum;
}
printf("%d\n", sevens);

return (0);
}
