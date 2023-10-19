#include "main.h"

/**
*get_string - to add two numbers stored in strings
*@n1: string containing the first number
*@n2: string containing the second number
*@r: buffer to store the result
*@r_index: current index of the buffer
*Return: result
*/
char *get_string(char *n1, char *n2, char *r, int r_index)
{
int num, carry = 0;

while (*n1 || *n2 || carry)
{
int digit1 = (*n1) ? (*n1 - '0') : 0;
int digit2 = (*n2) ? (*n2 - '0') : 0;

num = digit1 + digit2 + carry;
*(r + r_index) = (num % 10) + '0';
carry = num / 10;

if (*n1)
n1--;
if (*n2)
n2--;
r_index--;
}

if (carry && r_index >= 0)
{
*(r + r_index) = (carry % 10) + '0';
return (r + r_index);
}
else if (carry && r_index < 0)
return (0);

return (r + r_index + 1);
}

/**
*infinite_add - to add two numbers
*@n1: first number to be added
*@n2: second number to be added
*@r: buffer to store the result
*@size_r: buffer size
*Return: result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int n1_len = 0, n2_len = 0;

while (n1[n1_len])
n1_len++;
while (n2[n2_len])
n2_len++;

if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
return (0);

n1 += n1_len - 1;
n2 += n2_len - 1;
r[size_r] = '\0';

return (get_string(n1, n2, r, --size_r));
}
