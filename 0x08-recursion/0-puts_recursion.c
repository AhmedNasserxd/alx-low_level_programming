#include "main.h"

/**
*_puts_recursion - to print string followed by new line
*@s: string to use
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');

else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
