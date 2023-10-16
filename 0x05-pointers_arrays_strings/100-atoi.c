#include "main.h"

/**
*_atoi - convert a string to integer
*@s: the string to convert
*Return: the integer value of the string
*/
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}

while (s[i])
{
if (s[i] >= '0' && s[i] <= '9')
{
if (sign == 1 && (num > 214748364 || (num == 214748364 && s[i] - '0' > 7)))
return (2147483647);
if (sign == -1 && (num > 214748364 || (num == 214748364 && s[i] - '0' > 8)))
return (-2147483648);

num = num * 10 + (s[i] - '0');
}
else if (num != 0)
{
break;
}
i++;
}

return (num * sign);
}
