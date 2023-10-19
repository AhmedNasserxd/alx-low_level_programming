#include "main.h"

/**
*print_number - to print an integer under some rules
*@n: The number to be printed
*/

void print_number(int n)
{
unsigned int positive;
unsigned int divisor = 1;

if (n < 0)
{
_putchar('-');
positive = -n;
}
else
{
positive = n;
}

while (positive / divisor > 9)
{
divisor *= 10;
}

while (divisor > 0)
{
_putchar((positive / divisor) +'0');
positive %= divisor;
divisor /= 10;
}
}
