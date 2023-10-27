#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc == 3)
{

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;

printf("Error: %d\n", result);

return (0);
}
else
{
printf("Usage: %s <num1> <num2>\n", argv[0]);

return (1);
}
}
