#include <stdio.h>
#include <math.h>

/**
*main - to get the largest prime of 612852475143
*Return: Always 0 (Success)
*/

int main(void)
{
long number = 612852475143;
long largest = -1;
long i;

while (number % 2 == 0)
{
largest = 2;
number /= 2;
}

for (i = 3; i <= sqrt(number); i += 2)
{
while (number % i == 0)
{
largest = i;
number /= i;
}
}

if (number > 2)
largest = number;

printf("%ld\n", largest);

return (0);
}
