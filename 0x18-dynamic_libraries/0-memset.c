#include "main.h"

/**
**_memset - to fill a memory
*@s: the memory used
*@b: the char to fill with
*@n: the number of copies
*Return: pointer to memory
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
s[x] = b;

return (s);
}
