#include "variadic_functions.h"

/**
*sum_them_all - to return the sum of parameters
*@n: number of parameters
*Return: Always 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	unsigned int sum = 0, i;

if (n == 0)
return (0);
va_start(var, n);

for (i = 0; i < n; i++)
sum += va_arg(var, int);
va_end(var);

return (sum);
}
