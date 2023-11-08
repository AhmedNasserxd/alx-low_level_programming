#include <stdlib.h>
#include <stdio.h>

/**
*main - to print opcodes
*@argc: number of arguments
*@argv: array of said arguements
*Return: Always 0
*/
int main(int argc, char *argv[])
{
int bytes, i;
char *arr;

bytes = atoi(argv[1]);
arr = (char *)main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
return (0);
}
