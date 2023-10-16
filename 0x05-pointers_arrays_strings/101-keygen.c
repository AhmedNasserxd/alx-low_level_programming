#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - generate a valid password for
*Return: Always 0 (Success)
*/
int main(void)
{
int i, x, z;

srand(time(NULL));
for (x = 0, z = 2772; z > 122; x++)
{
i = (rand() % 125) + 1;
printf("%c", i);
z -= i;
}

printf("%c", z);

return (0);
}
