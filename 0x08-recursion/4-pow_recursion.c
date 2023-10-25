#include "main.h"

/**
*_pow_recursion - to print the value of x 
*@x: the base
*@y: the exponent
*Return: the result
*/
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
if (y == 0)
return (1);

if (y > 1)
result *= _pow_recursion(x, y - 1);

return result;
}
