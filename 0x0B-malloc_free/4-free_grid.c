#include "main.h"
#include <stdlib.h>

/**
*free_grid - to free up a grid
*@grid: grid to use
*@height: height of the grid
*/

void free_grid(int **grid, int height)
{
int x;

for (x = 0; x < height; x++)
free(grid[x]);

free(grid);
}
