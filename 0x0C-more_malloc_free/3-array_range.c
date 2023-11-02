#include "main.h"

/**
*array_range - create an array of integers
*@min: min value
*@max: max value
*Return: pointer result
*/

int *array_range(int min, int max)
{
int *new_array, i;

if (min > max)
return (NULL);

new_array = malloc((max - min + 1) * sizeof(*new_array));
if (new_array == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
new_array[i] = min;

return (new_array);
}
