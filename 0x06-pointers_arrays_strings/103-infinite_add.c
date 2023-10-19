#include "main.h"

/**
*infinite_add - to add two numbers
*@n1: first number to be added
*@n2: second number to be added
*@r: buffer to store the result
*@size_r: buffer size
*Return: the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, overflow = 0, sum, digits = 0;

while (n1[i] || n2[j] || overflow)
{
int digit1 = (n1[i]) ? (n1[i] - '0') : 0;
int digit2 = (n2[j]) ? (n2[j] - '0') : 0;

sum = digit1 + digit2 + overflow;
overflow = sum / 10;
r[digits] = (sum % 10) + '0';

if (++digits >= size_r)
return (0);

if (n1[i])
i++;
if (n2[j])
j++;
}

if (digits == size_r)
return (0);

r[digits] = '\0';

if (digits > 0)
rev_string(r);

return (r);
}
