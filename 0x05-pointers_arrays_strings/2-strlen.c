#include "main.h"

/**
*_strlen - calculating length of string
*@s: string to calculate
*Return: the length of string
*/

int _strlen(char *s)
{
int i;
int x;
x = 0;

for (i = 0; s[i] != '\0'; i++)
x++;

return (x);
}
