#include "variadic_functions.h"

/**
*print_all - to print
*@format: list of arguments passed
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *zsc, *sep = "";

va_list arr;

va_start(arr, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(arr, int));
break;
case 'i':
printf("%s%d", sep, va_arg(arr, int));
break;
case 'f':
printf("%s%f", sep, va_arg(arr, double));
break;
case 's':
zsc = va_arg(arr, char *);
if (!zsc)
zsc = "(nil)";
printf("%s%s", sep, zsc);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}

va_end(arr);

printf("\n");
}
