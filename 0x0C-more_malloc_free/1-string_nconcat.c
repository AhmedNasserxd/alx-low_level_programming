#include "main.h"

/**
*string_nconcat - to concatenates two strings
*@s1: first string
*@s2: second string
*@n: The maximum number of bytes
*Return: result
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *con;
unsigned int total_length = n, index;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (index = 0; s1[index]; index++)
total_length++;

con = malloc(sizeof(char) * (total_length + 1));

if (con == NULL)
return (NULL);

total_length = 0;

for (index = 0; s1[index]; index++)
con[total_length++] = s1[index];

for (index = 0; s2[index] && index < n; index++)
con[total_length++] = s2[index];

con[total_length] = '\0';

return (con);
}
