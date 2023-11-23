#include "main.h"

/**
*get_bit - to print the value of a bit
*@n: used number
*@index: index of the bit
*Return: result
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit;

if (index > 64)
return (-1);

bit = n >> index;

return (bit & 1);
}
