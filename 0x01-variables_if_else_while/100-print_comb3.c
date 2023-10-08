#include <stdio.h>

/**
*main - printing all combinations of any two digits
*Return: Always 0 (Success)
*/

int main(void)
{
int n, m;

for (n = 0; n <= 8; n++)
{
for (m = n + 1; m <= 9; m++)
{
printf("%d%d", n, m);
if (n != 8 || m != 9)
{
printf(", ");
}
}
}
printf("\n");

return (0);
}
