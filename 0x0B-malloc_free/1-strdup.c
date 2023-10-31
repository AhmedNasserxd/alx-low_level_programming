#include "main.h"
#include <stdlib.h>

/**
*_strdup - to duplicate a string
*@str: string to duplicate
*Return: result
*/
char *_strdup(char *str)
{
unsigned int i = 0;
unsigned int j = 0;
char *list;
if (str == NULL) 
return (NULL);

while (str[j])
j++;

list = malloc(sizeof(char) * (j + 1));

if (list == NULL)
return (NULL);

for (i = 0; str[i]; i++)
list[i] = str[i];

list[j] = '\0';
return (list);
}
