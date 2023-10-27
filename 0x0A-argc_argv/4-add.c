#include <stdlib.h>
#include <stdio.h>

/**
*main - to add positive numbers
*@argc: number of command lines
*@argv: array of command lines
*Return: Always 0
*/

int main(int argc, char *argv[])
{
int x, z;
int result = 0;

for (x = 1; x < argc; x++)
{
for (z = 0; argv[x][z] != '\0'; z++)
{
if (argv[x][z] < '0' || argv[x][z] > '9')
{
printf("Error\n");
return (1);
}
}
result += atoi(argv[x]);
}
printf("%d\n", result);

return (0);
}
