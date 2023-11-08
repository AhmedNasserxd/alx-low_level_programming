#include "function_pointers.h"
#include <stdlib.h>

/**
*int_index - a function to search for an integer
*@array: array to use
*@size: size of array
*@cmp: pointer
*Return: result
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
reurn (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
