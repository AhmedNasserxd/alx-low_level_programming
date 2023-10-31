#include "main.h"
#include <stdlib.h>

/**
*create_array - to create an array of characters
*@size: size of the array
@c: initial character value
*Return: result
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *list;

if (size == 0)
return (NULL);

char *list = (char *)malloc(size);

if (list == NULL)
return (NULL);

for (i = 0; i < size; i++)
list[i] = c;

return (list);
}
