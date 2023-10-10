#include "main.h"

/**
*print_alphabet - printing lowercase alpha followed by a new line
*Return: Always 0
*/

void print_alphabet(void)
{
char x = 'a';

while (x <= 'z')
{
_putchar(x);
x++;
}

_putchar('\n');
}
