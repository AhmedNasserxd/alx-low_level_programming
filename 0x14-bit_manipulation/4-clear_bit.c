#include "main.h"

/**
*clear_bit - to set a value of a bit
*@n: used number
*@index: used index
*Return: result
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);

*n &= ~(1 << index);
return (1);
}
