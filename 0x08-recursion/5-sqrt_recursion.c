#include "main.h"

int find_sqrt(int n, int guess);

/**
*_sqrt_recursion - to return natural square root of a number
*@n: number to calculate the square root of
*Return: the result
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 0));
}

/**
*find_sqrt - to recursively searche for the natural square root
*@n: number to calculate the square root of
*@guess: current guess for the square root
*Return: the result
*/
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (find_sqrt(n, guess + 1));
}
