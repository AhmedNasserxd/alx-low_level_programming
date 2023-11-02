#include "main.h"

/**
*_realloc - to reallocate a memory block
*@prev_ptr: previous memory block
*@old_size: size of allocated space
*@new_size: size for new allocated space
*Return: pointer result
*/
void *_realloc(void *prev_ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *copy;
unsigned int i;

if (new_size == old_size)
return (prev_ptr);
if (prev_ptr != NULL && new_size == 0)
{
free(prev_ptr);
return (NULL);
}
if (prev_ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
copy = prev_ptr;
for (i = 0; i < old_size; i++)
new_ptr[i] = copy[i];
free(prev_ptr);
return (new_ptr);
}
