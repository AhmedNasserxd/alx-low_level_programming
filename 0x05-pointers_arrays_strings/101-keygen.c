#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generate a valid password for
*Return: Always 0 (Success)
 */
int main(void)
{
char password[15];
int i;
unsigned int seed;

seed = time(NULL);
srand(seed);

for (i = 0; i < 14; i++)
{
password[i] = rand() % 94 + 33;
}
password[14] = '\0';

printf("%s", password);

return (0);
}
