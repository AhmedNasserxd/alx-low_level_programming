#include "main.h"

/**
*_isalpha - to check for alphabetic character
*@c: checking character
*Return: 1 lower or uppercase, 0 not alphabet
*/

int _isalpha(int c)
{
char loweralpha;
char upperalpha;
int x = 0;

for (loweralpha = 'a'; loweralpha <= 'z'; loweralpha++)
{
for (upperalpha = 'A'; upperalpha <= 'Z'; upperalpha++)
{
if (c == loweralpha || c = upperalpha)
x = 1;
}
}
return (x);
}
