#include "main.h"

/**
*get_endianness - to check for endianness
*Return: result
*/

int get_endianness(void)
{
unsigned int i;
char *c;

i = 1;
*c = (char *) &i;

return (*c);
}
