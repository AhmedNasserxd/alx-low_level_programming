#include "variadic_functions.h"

/**
*sum_them_all - to return the sum of parameters
*@n: number of parameters
*Return: result
*/

int sum_them_all(const unsigned int n, ...)
{
va_list arr;
unsigned int i;
int sum = 0;

va_start(arr, n);

if (n == 0)
return (0);

for (i = 0; i < n; i++)
sum += va_arg(arr, int);

va_end(arr);

return (sum);
}
