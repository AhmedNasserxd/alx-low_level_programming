#include "main.h"

/**
*_atoi - convert a string to integer
*@s: the string to convert
*Return: the integer value of the string
*/
int _atoi(char *s)
{
int num = 0;
int sign = 1;
int i = 0;

while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
{
if (s[i] == '-')
sign *= -1;
i++;
}

while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
{
if (num >= 0)
{
num = num * 10 - (s[i] - '0');
i++;
}
else
{
num = num * 10 - (s[i] - '0');
i++;
}
}
sign *= -1;
return (num *sign);
}
