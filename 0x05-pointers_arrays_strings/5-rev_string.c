#include "main.h"

/**
*rev_string - reversing a string
*@s: the array string
*/

void rev_string(char *s)
{
int i, x, z;
char j, h;

for (i = 0; s[i] != '\0'; i++)
{

}

x = i - 1;
z = 0;

while (x > z)
{
j = s[z];
h = s[x];
s[z] = h;
s[x] = j;
x--;
z++;
}
}
