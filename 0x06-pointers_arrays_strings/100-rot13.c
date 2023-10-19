#include "main.h"

/**
*rot13 - to encode string using ROT13 algorithm
*@s: string to be encoded
*Return: pointer to the resulting encoded string
*/
char *rot13(char *s)
{
char *input_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_alphabet = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (int i = 0; s[i] != '\0'; i++)
{
char *p = strchr(input_alphabet, s[i]);
if (p != NULL)
{
s[i] = rot13_alphabet[p - input_alphabet];
}
}

return (s);
}
