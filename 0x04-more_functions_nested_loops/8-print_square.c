#include "main.h"

/**
*print_square - print square of a given size
*@size: the size used
*Return: void
*/

void print_square(int size)
{
int x, z;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 1; x <= size; x++)
{
for (z = 1; z <= size; z++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
