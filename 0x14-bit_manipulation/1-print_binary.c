#include "main.h"

/**
*print_binary - to print binary representation of number
*@n: decimal number to use
*/

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);

_putchar((n & 1) + '0');
}
