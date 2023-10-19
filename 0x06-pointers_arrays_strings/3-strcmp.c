#include "main.h"

/**
*_strcmp - to compare two strings
*@s1: the first string
*@s2: the second string
*Return: either value.
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}

return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
