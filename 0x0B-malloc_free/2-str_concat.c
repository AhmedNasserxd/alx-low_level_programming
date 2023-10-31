#include "main.h"
#include <stdlib.h>

/**
*str_concat - to concatenate two strings
*@s1: first string
*@s2: second string
*Return: result
*/
char *str_concat(char *s1, char *s2)
{
unsigned int x = 0, z = 0;
unsigned int lis1 = 0, lis2 = 0;
char *strlis;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[lis1])
lis1++;

while (s2[lis2])
lis2++;

char *strlis = malloc(sizeof(char) * (lis1 + lis2 + 1));

if (strlis == NULL)
return (NULL);

for (x = 0; x < lis1; x++)
strlis[x] = s1[x];

for (z = 0; z < lis2; z++)
strlis[lis1 + z] = s2[z];

strlis[lis1 + lis2] = '\0';

return (strlis);
}
