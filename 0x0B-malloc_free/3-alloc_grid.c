#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - to create a 2D integer grid
*@width: width of the grid
*@height: height of the grid
*Return: result
*/
int **alloc_grid(int width, int height)
{
int x, z;
int **list;

if (width < 1 || height < 1)
return (NULL);

list = malloc(height * sizeof(*list));
if (list == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
list[x] = malloc(width * sizeof(**list));
if (list[x] == NULL)
{
for (z = x - 1; z >= 0; z--)
free(list[z]);
free(list);
return (NULL);
}
for (z = 0; z < width; z++)
list[x][z] = 0;
}

return (list);
}
