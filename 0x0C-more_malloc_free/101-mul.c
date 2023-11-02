#include "main.h"
#include <stdio.h>

/**
*main - to multiply two positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: Always 0
*/

int main(int argc, char *argv[])
{
unsigned long var;
int x, z;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

for (x = 1; x < argc; x++)
{

for (z = 0; argv[x][z] != '\0'; z++)
{
if (argv[x][z] > 57 || argv[x][z] < 48)
{
printf("Error\n");
exit(98);
}
}
}

var = atol(argv[1]) * atol(argv[2]);

printf("%lu\n", var);

return (0);
}
