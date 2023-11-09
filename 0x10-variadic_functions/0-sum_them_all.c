#include "variadic_functions.h"

/**
*sum_them_all - to return the sum of parameters
*@n: number of parameters
*Return: Always 0
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list arr;
int sum;

va_start(arr, n);

for (i = 0, sum = 0; i < n; i++)
sum += va_arg(arr, int);

va_end(arr);

return (sum);
}
