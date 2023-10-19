#include "main.h"

/**
*_strncat - to concatenates n bytes from string to another
*@dest: first string
*@src: second string
*@n: number of bytes
*Return: the pointer result
*/

char *_strncat(char *dest, char *src, int n)
{
int x, z;

x = 0;
z = 0;

while (dest[x] != '\0')
x++;

while (src[z] != '\0' && x < z)
{
dest[x] = src[z];
x++;
z++;
}

dest[x] = '\0';

return (dest);
}
