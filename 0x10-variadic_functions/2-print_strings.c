#include "variadic_functions.h"

/**
*print_strings - to print string with separator followed by new line
*@separator: string separator
*@n: strings number
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arr;
char *zsc;
unsigned int i;

va_start(arr, n);

for (i = 0; i < n; i++)
{
zsc = va_arg(arr, char *);

if (zsc)
printf("%s", zsc);

else
printf("(nil)");

if (i < n - 1)

if (separator)
printf("%s", separator);
}

va_end(arr);

printf("\n");
}
