#include "main.h"

/**
*binary_to_uint - to convert binary to unsigned int
*@b: char to use
*Return: result
*/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int gross, con;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}

for (con = 1, gross = 0, i--; i >= 0; i--, con *= 2)
{
if (b[i] == '1')
gross += con;
}

return (gross);
}
