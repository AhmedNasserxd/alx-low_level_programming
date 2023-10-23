#include "main.h"
#include <stdio.h>

/**
*print_diagsums - to print sums of the diagonals in a matrix
*@a: the matrix
*@size: the size of the matrix
*/

void print_diagsums(int *a, int size)
{
int diagonal_sum_1 = 0;
int diagonal_sum_2 = 0;
int row;
for (int row = 0; row < size; row++)
{
diagonal_sum_1 += a[row * size + row];
diagonal_sum_2 += a[row * size + (size - 1 - row)];
}

printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
