#include "main.h"

/**
*print_line - to print "_" n times that draws a line
*@n: the number of characters to draw
*/

void print_line(int n)
{
int i = n;

for (i = n; i > 0; i--)
_putchar('_');

_putchar('\n');
}
