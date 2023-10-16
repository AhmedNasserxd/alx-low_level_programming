#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generate random valid passwords
*Return: Always 0 (Success)
*/
int main(void)
{
char password[84];
int sum = 0;
int i, r;

srand(time(NULL));

for (i = 0; sum < 2772 - 122; i++)
{
r = rand() % 62;

if (r < 10)
password[i] = '0' + r;
else if (r < 36)
password[i] = 'a' + r - 10;
else
password[i] = 'A' + r - 36;

sum += password[i];
}

password[i] = 2772 - sum - '\0';
printf("%s", password);

return (0);
}
