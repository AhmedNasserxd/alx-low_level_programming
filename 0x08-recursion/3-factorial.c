#include "main.h"

/**
*factorial - to return factorial of a number
*@n: number to use
*Return: result
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (1);

return (n * factorial(n - 1));
}
