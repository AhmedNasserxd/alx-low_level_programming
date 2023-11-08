#include "function_pointers.h"
#include <stdlib.h>

/**
*print_name - to print a name from a pointer
*@name: char to use
*@f: pointer to use
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
