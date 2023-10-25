#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
*is_palindrome - to check if a string is a palindrome
*@s: string to check
*Return: the result
*/

int is_palindrome(char *s)
{
int length = 0;

while (s[length] != '\0')
length++;

if (length <= 1)
return (1);

return check_palindrome(s, 0, length - 1);
}

/**
*check_palindrome - to check if a string is a palindrome
*@s: string to check
*@start: starting index
*@end: ending index
*Return: the result
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] == s[end])
return check_palindrome(s, start + 1, end - 1);

return (0);
}
