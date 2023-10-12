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

i = 1;
printf("%d", i);

for (i = 2; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
else if (i % 3 == 0)
{
printf(" Fizz");
}
else if (i % 5 == 0)
{
printf(" Buzz");
}
else
{
printf(" %d", i);
}
}
putchar('\n');
return (0);
}
