#include <stdio.h>

/**
*main - to print number of arguments
*@argc: number of command lines
*@argv: array of command lines
*Return: Always 0
*/

int main(int argc, char *argv[] __attribute__((__unused__)))
{
printf("%d\n", argc - 1);

return (0);
}
