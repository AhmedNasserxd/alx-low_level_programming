#include "main.h"

/**
*_islower - to check for lowercase character
*@c: checking character
*Return: 1 lowercase, 0 uppercase
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

else
return (0);

_putchar('\n');
}
