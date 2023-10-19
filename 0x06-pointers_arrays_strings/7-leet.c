#include "main.h"

/**
*leet - to encode a string into 1337
*@s: string to manipulate
*Return: pointer to the resulting string
*/
char *leet(char *s)
{
char leet_chars[] = "aAeEoOtTlL";
char leet_replacements[] = "4433007711";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (s[i] == leet_chars[j])
{
s[i] = leet_replacements[j];
break;
}
}
}

return (s);
}
