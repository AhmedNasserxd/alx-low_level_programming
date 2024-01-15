#include <unistd.h>

/**
*_putchar - to write the character c to stdout
*@c: character to print
*Return: result
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
