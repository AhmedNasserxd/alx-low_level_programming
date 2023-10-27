#include <stdio.h>

/**
*main - to print all arguments
*@argc: counter
*@argv: vector
*Return: Always 0
*/

int main(char *argv[], int argc)
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i])

return (0);
}
