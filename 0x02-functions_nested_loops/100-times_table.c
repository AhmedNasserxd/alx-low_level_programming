#include "main.h"

/**
*print_times_table - prints times table to a given integer
*@n: maximum value for the times table
*/

void print_times_table(int n)
{
int row, column, product;

if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = row * column;
if (column == 0)
{
_putchar('0' + product);
}
else
{
_putchar(',');
_putchar(' ');
if (product < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product < 100)
{
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
else
{
_putchar('0' + (product / 100));
_putchar('0' + ((product / 10) % 10));
_putchar('0' + (product % 10));
}
}
}
_putchar('\n');
}
}
}
