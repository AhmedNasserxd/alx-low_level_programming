#include "main.h"

/**
*_strchr - to locate a first occurence of a character
*@s: string to use
*@c: character to locate
*Return: the result
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++
}

return (*s == c ? s : NULL);
}
