#include <stdio.h>

/**
*main - program to print first 98 fibonacci numbers
*Return: Always 0 (Success)
*/

int main(void)
{
unsigned int i;
unsigned int n1 = 1, n2 = 2, next;

printf("%u, %u", n1, n2);

for (i = 2; i < 98; i++)
{
next = n1 + n2;
printf(", %u", next);
n1 = n2;
n2 = next;
}

printf("\n");

return (0);
}
