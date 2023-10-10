#include "main.h"

/**
*print_alphabet_x10 - print lowercase alphabet 10 times followed by a new line
*Return: Always 0
*/

void print_alphabet_x10(void)
{
char x;
int c;

for (c = 1; c <= 10; c++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
