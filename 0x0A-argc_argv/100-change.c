#include <stdio.h>
#include <stdlib.h>

/**
*main - to print minimum number of coins
*@argc: number of arguments
*@argv: array of argument
*Return: result
*/
int main(int argc, char *argv[])
{
int i, cash, coins = 0;
int list[5] = {25, 10, 5, 2, 1};

cash = atoi(argv[argc - 1]);

if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (cash <= 0)
{
printf("0\n");
}
else
{
for (i = 0; i < 5; i++)
{
if (list[i] <= cash)
{
coins += (cash / list[i]);
cash -= (cash / list[i]) * list[i];
if (cash == 0)
{
printf("%d\n", coins);
break;
}
}
}
}
return (0);
}
