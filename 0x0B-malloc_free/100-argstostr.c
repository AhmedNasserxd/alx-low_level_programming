#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*argstostr - to concatenate all arguments
*@ac: the argument count
*@av: an array of strings
*Return: result
*/
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j;
char *strd, *list;
if (ac <= 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++;
}

strd = malloc((total_length + 1) * sizeof(char));

if (strd == NULL)
return (NULL);

*list = strd;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
*strd = av[i][j];
strd++;
}
*strd = '\n';
strd++;
}

*strd = '\0';

return (list);
}
