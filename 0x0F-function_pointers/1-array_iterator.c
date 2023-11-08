#include "function_pointers.h"
#include <stdlib.h>

/**
*array_iterator - to execute a function with parameter
*@array: array to use
*@size: size of array
*@action: pointer to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
for (i = 0; i < size; i++)
action(array[i]);
}
