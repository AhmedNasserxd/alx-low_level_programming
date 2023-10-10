#include "main.h"

/**
*print_sign - printing the sign of number
*@n: the checking number
*Return: 1 greater than 0, 0 if 0, -1 less than 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
