#include "main.h"

/**
*malloc_checked - to allocate memory
*@b: memory size to allocate
*Return: pointer result
*/

void *malloc_checked(unsigned int b)
{
void *m;

m = malloc(b);
if (m == NULL)
exit(98);

return (m);
}
