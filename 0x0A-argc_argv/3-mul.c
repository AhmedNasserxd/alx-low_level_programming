#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

if (argc == 3)
{

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;

printf("Result: %d\n", result);

return (0);
}
else
{
printf("Usage: %s <num1> <num2>\n", argv[0]);

return (1);
}
}