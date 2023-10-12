#include "main.h"
#include <stdio.h>

/**
*main - will print numbers 1 to 100 followed by new line
*Fizz for multiplies of 3
*Buzz for multiplies of 5
*FizzBuzz for multiplies of both 3 and 5
*Return: Always 0 (success)
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf(" FizzBuzz");
else if (i % 5 == 0 && i % 3 != 0)
printf(" Buzz");
else if (i % 3 == 0 && i % 5 != 0)
printf(" Fizz");
else
printf(" %d", i);
}
_putchar('\n');
return (0);
}
