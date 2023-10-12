#include "main.h"

/**
*print_diagonal - print "\" for number of times
*@n: the number of times
*/

void print_diagonal(int n)
{
int x, z;

if (n <= 0)
_putchar('\n');
else
{
for (x = 0; x < n; x++)
{
for (z = 0; z < n; z++)
{
if (z == x)
_putchar('\\');
else if (z < x)
_putchar(' ');
}
_putchar('\n');
}
}
}
