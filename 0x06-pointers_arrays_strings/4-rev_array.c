#include "main.h"

/**
*reverse_array - to reverse an array of integers
*@a: pointer to be reversed
*@n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
