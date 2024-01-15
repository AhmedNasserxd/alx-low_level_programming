#include "main.h"

/**
**_memcpy - to copy memory
*@dest: destination memory
*@src: memory to copy
*@n: bytes to copy
*Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
dest[x] = src[x];

return (dest);
}
