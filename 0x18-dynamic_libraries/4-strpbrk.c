#include "main.h"
#include <stdio.h>

/**
*_strpbrk - to search a string for a set of bytes
*@s: string to search
*@accept: bytes to look for
*Return: the result
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}

return (NULL);
}
