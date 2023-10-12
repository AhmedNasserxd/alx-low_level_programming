#include "main.h"

/**
*_isdigit - to check for digits
*@c: the actual digit to check
*Return: 1 when true, 0 when false
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);

return (0);
}
