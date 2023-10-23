#include "main.h"
#include <stdlib.h>

/**
*_strstr - locate a substring in a string
*@haystack: string to search in
*@needle: substring to find
*Return: pointer to the result
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

i = 0;

while (haystack[i] != '\0')
{
j = 0;

while (needle[j] != '\0' && haystack[i + j] == needle[j])
{
j++;
}

if (needle[j] == '\0')
return (&haystack[i]);

i++;
}

return (NULL);
}
