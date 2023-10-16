#include "main.h"

/**
*_atoi - convert a string to integer
*@s: the string to convert
*Return: the integer value of the string
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == '\r' || s[i] == '\f' || s[i] == '\v')
{
i++;
}

if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return result * sign;
}
