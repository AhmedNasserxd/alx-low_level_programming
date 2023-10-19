#include "main.h"

/**
*_strcat - to concatenate two strings
*@dest: first string
*@src: second string
*Return: the pointer result
*/

char *_strcat(char *dest, char *src)
{
int x, z;
x = 0;
z = 0;

while (dest[x] != '\0')
x++;

while (src[z] != '\0')
{
dest[x] = src[z];
x++;
z++;
}

dest[x] = '\0';

return (dest);
}
