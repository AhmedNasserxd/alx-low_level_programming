#include "main.h"

/**
*_calloc - to allocate memory for an array
*@nmemb: number of elements
*@size: size of each element
*Return: pointer result
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *allo_mem;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

allo_mem = malloc(nmemb * size);

if (allo_mem == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
allo_mem[i] = 0;

return (allo_mem);
}
