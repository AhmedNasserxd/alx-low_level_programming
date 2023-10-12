#include "main.h"

/**
*print_triangle - it will print a triangle followed by new line
*@size: this is the size of it
*Return: void
*/

void print_triangle(int size)
{
int i, j, x;

if (size <= 0)
_putchar('\n');

for (i = 1; i <= size; i++)
{
for (j = 1; j <= (size - x); j++)
_putchar(' ');

for (x = 1; x <= i; x++)
_putchar('#');

_putchar('\n');
}
}
