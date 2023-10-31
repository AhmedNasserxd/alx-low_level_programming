#include "main.h"
#include <stdlib.h>

/**
*countWords - to count the number of words
*@str: string to use
*Return: number of words
*/

int countWords(char *str)
{
int inWord = 0, wordCount = 0;

for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
inWord = 0;
else if (!inWord)
{
inWord = 1;
wordCount++;
}
}

return (wordCount);
}

/**
*strtow - to split a string into words
*@str: string to use
*Return: result
*/
char **strtow(char *str)
{
char **wordArray, *tmp;
int len = 0, wordCount = 0, i, k = 0, c = 0, start, end;

while (str[len])
	len++;

wordCount = countWords(str);

if (wordCount == 0)
return (NULL);

wordArray = (char **)malloc(sizeof(char *) * (wordCount + 1));

if (wordArray == NULL)
return NULL;

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *)malloc(sizeof(char) * (c + 1));

if (tmp == NULL)
return (NULL);

while (start < end)
*tmp++ = str[start++];

*tmp = '\0';
wordArray[k] = tmp - c;
k++;
c = 0;
}
}
else if
(c++ == 0)
start = i;
}

wordArray[k] = NULL;

return (wordArray);
}
