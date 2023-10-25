#include "main.h"

/**
*wildcmp - to compare two strings and returns result
*@s1: the normal string
*@s2: the special string
*Return: result
*/

int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
return (*s1 == '\0');

if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
return (1);

if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);
}

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}
