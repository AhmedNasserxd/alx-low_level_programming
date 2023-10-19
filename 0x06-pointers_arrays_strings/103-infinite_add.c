#include "main.h"

/**
*rev_string - to reverse a string
*@s: string to be reversed
*/
void rev_string(char *s)
{
int length = 0;
int i = 0;
char temp;

while (s[length] != '\0')
length++;


while (i < length / 2)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
i++;
}
}

/**
*infinite_add - to add two numbers as strings
*@n1: first number to add
*@n2: second number to add
*@r: buffer to store the result
*@size_r: size of the buffer
*Return: pointer to the result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, overflow = 0, digits = 0;
int val1 = 0, val2 = 0, temp_tot = 0;

while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j--;

if (i > size_r || j > size_r)
return (0);

i--;
j++;

while (j >= 0 || i >= 0 || overflow == 1)
{
val1 = (i >= 0) ? (n1[i] - '0') : 0;
val2 = (j >= 0) ? (n2[j] - '0') : 0;
temp_tot = val1 + val2 + overflow;
overflow = temp_tot / 10;

if (digits >= (size_r - 1))
return (0);

r[digits] = (temp_tot % 10) + '0';
digits++;
j++;
i--;
}

if (digits == size_r)
return (0);

r[digits] = '\0';
rev_string(r);

return (r);
}
