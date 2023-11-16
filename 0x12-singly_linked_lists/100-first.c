#include <stdio.h>

/**
*first_to_go - to print a statement before main func
*/

void __attribute__((constructor)) first_to_go(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
