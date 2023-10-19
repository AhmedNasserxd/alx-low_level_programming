#include "main.h"

/**
*cap_string - to capitalize the first letter of each word in a string
*@s: string to modify
*Return: pointer to the resulting string
*/
char *cap_string(char *s)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}

for (j = 0; separators[j] != '\0'; j++)
{
if (s[i] == separators[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
}
}
}
}

return s;
}
