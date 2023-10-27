#include "main.h"

/**
*_strncpy - to copy string
*@dest: first string
*@src: second string
*@n: number of bytes
*Return: the pointer result
*/

char *_strncpy(char *dest, char *src, int n)
{
int x;
x = 0;

while (src[x] != '\0' && x < n)
{
dest[x] = src[x];
x++;
}

while (x < n)
{
dest[x] = '\0';
x++;
}

return (dest);
}
