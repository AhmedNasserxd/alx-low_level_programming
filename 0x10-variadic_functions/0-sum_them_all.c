#include "variadic_functions.h"

/**
*sum_them_all - to return the sum of parameters
*@n: number of parameters
*Return: Always 0
*/

int sum_them_all(const unsigned int n, ...)
{
int sum;
va_list arr;
unsigned int i;

va_start(arr, n);
if (n == 0)
return (0);

for (i = 0; i < n; i++)
sum += va_arg(arr, int);

va_end(arr);

return (sum);
}
