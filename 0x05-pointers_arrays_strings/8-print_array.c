#include "main.h"

/**
*print_array - print elements of array followed by new line
*@a: array
*@n: the number of elements
*/

void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x < n - 1)
printf(", ");
}
printf("\n");
}
