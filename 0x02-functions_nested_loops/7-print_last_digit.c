#include "main.h"

/**
*print_last_digit - to print the last digit of integer
*@n: integer input
*Return: last digit
*/

int print_last_digit(int n)
{
if (n < 0)
n *= -1;

_putchar('0' + (n % 10));

return (n % 10);
}
