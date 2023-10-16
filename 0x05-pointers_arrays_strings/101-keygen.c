#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generate a valid password for
*Return: Always 0 (Success)
*/
int main(void)
{
srand(time(0));

char password[15];

for (int i = 0; i < 14; i++)
{
if (rand() % 2 == 0) // Randomly choose to add a letter or a number
{
if (rand() % 2 == 0) // Randomly choose to add an uppercase letter or a lowercase letter
password[i] = 'A' + rand() % 26;
else
password[i] = 'a' + rand() % 26;
}
else
{
password[i] = '0' + rand() % 10; // Add a random digit
}
}

password[14] = '\0'; // Null-terminate the string

printf("%s\n", password);

return 0;
}
