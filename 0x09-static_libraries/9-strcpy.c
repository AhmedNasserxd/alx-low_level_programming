#include "main.h"

/**
**_strcpy - copying specific string
*@dest: the string
*@src: the pointer
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
int i;
int x;

for (x = 0; src[x] != '\0'; x++)
{
}

for (i = 0; i <= x; i++)
dest[i] = src[i];

return (dest);
}
