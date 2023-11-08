#include "3-calc.h"

/**
*op_add - adds two integers
*@a: first integer
*@b: second integer
*Return: sum
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
*op_sub - to calculate the difference of two integers
*@a: first integer
*@b: second integer
*Return: difference
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
*op_mul - to calculate product of two integers
*@a: first integer
*@b: second integer
*Return: product
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
*op_div - to calculate division of two integers
*@a: first integer
*@b: second integer
*Return: division
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
*op_mod - to calculate division's remainder of two integers
*@a: first integer
*@b: second integer
*Return: division's remainder
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
