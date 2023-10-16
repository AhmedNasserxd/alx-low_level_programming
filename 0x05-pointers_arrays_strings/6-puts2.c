#include "main.h"

/**
*puts2 - to print every other character
*@str: the char to use
*/

void puts2(char *str)
{
int x = 0;

while (str[x] != '\0')
{
if (x % 2 == 0)
_putchar(str[x]);

x++;
}
_putchar('\n');
}
