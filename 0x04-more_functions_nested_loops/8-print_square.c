#include "main.h"

/**
*print_square - to print square of a given size
*@size: the size used
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
for (x = 0; x < size; x++);
{
for (z = 0; z < size; z++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
