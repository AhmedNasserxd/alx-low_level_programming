#include "main.h"

/**
*factorial - to return factorial of a number
*@n: number to use
*Return: result
*/
int factorial(int n)
{
int result = 1;

if (n < 0)
return (-1);
if (n == 0)
return (1);

while (n > 0)
{
result *= n;
n--;
}

return result;
}
