#include "main.h"
#include <limits.h>

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

while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
i++;

if (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign = -1;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] - '0' > 7))
return (sign == 1 ? INT_MAX : INT_MIN);

num = num * 10 + (s[i] - '0');
i++;
}

return (num * sign);
}
