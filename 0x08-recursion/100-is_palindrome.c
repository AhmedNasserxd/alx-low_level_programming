#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int start, int end);

/**
*_strlen - to calculate length of a string
*@s: string to use
*Return: the result
*/

int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
*is_palindrome - checks if a string is a palindrome
*@s: string to check
*Return: result
*/
int is_palindrome(char *s)
{
int length = _strlen(s);

if (length <= 1)
return (1);

return (check_palindrome(s, 0, length - 1));
}

/**
*check_palindrome - checks if a string is a palindrome
*@s: string to check
*@start: starting index
*@end: ending index
*Return: result
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] == s[end])
return (check_palindrome(s, start + 1, end - 1));

return (0);
}
