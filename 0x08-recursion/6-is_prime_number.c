#include "main.h"

int is_prime_recursive(int n, int div);

/**
*is_prime_number - to determine if a number is prime
*@n: number to evaluate
*Return: the result
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_recursive(n, 2));
}

/**
*is_prime_recursive - to recursively check if a number is prime
*@n: number to evaluate
*@div: current divisor to check
*Return: the result
*/
int is_prime_recursive(int n, int div)
{
if (div == n)
return (1);
if (n % div == 0)
return (0);
return (is_prime_recursive(n, div + 1));
}
