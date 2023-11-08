#include "3-calc.h"

/**
*main - to run program
*@argc: counter
*@argv: arguments to count
*Return: Always 0
*/

int main(int argc, char *argv[])
{
int x, z;
int (*k)(int, int);

x = atoi(argv[1]);
z = atoi(argv[3]);
k = get_op_func(argv[2]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

if (k == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", k(x, z));

return (0);
}
