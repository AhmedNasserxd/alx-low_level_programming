#include "main.h"

/**
*_isupper - to check fo uppercase characters
*@c: this is the character
*Return: 1 if it is, 0 if it is not
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

return (0);
}
