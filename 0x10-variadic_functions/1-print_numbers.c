#include "variadic_functions.h"

/**
*print_numbers - to print numbers with separator followed by new line
*@separator: string separator
*@n: arguments number
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arr;
unsigned int i;

va_start(arr, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(arr, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

va_end(arr);

printf("\n");
}
