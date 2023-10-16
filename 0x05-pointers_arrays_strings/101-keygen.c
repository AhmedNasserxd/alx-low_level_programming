#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generate a valid password for
*Return: Always 0 (Success)
*/
int main(void)
{
srand((unsigned int)time(0));

char password[15];
int i;

for (i = 0; i < 14; i++)
{
if (rand() % 2 == 0)
{
if (rand() % 2 == 0)
password[i] = 'A' + (rand() % 26);
else
password[i] = 'a' + (rand() % 26);
}
else
{
password[i] = '0' + (rand() % 10);
}
}

password[14] = '\0';

printf("%s\n", password);

return (0);
}
