#include "main.h"

/**
*more_numbers - to print x10 the numbers from 0 to 14 followed by new line
*/

void more_numbers(void)
{
int i, x;

for (i = 0; i < 10; i++)
{
for (x = 0; x < 15; x++)
{
if (x >= 10)
{
_putchar(x / 10 + '0');
}
_putchar(x % 10 + '0');
}
_putchar('\n');
}
}
