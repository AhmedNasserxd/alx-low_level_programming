#include "main.h"

/**
*print_number - Print an integer
*@n: The integer to print
*/
void print_number(int n)
{
int power = 1;

if (n < 0)
{
_putchar('-');
n *= -1;
}

int temp = n;

while (temp > 9)
{
temp /= 10;
power *= 10;
}

while (power >= 1)
{
_putchar((n / power) + '0');
n %= power;
power /= 10;
}
}
