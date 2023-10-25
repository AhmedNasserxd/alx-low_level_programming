#include "main.h"

/**
*_print_rev_recursion - to print a string in reverse
*@s: string to use
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
