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
unsigned long mul;
int i;

if (argc != 3)
{
printf("Error\n");
return (98);
}

for (i = 1; i < argc; i++)
{
char *arg = argv[i];
while (*arg)
{
if (*arg < '0' || *arg > '9')
{
printf("Error\n");
return (98);
}
arg++;
}
}

mul = strtoul(argv[1], NULL, 10) * strtoul(argv[2], NULL, 10);

printf("%lu\n", mul);

return (0);
}
