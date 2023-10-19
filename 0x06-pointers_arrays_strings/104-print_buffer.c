#include "main.h"
#include <stdio.h>

/**
*print_buffer - to print a buffer 10 bytes at a time
*@b: buffer to be printed
*@size: number of bytes to be printed from the buffer
*/
void print_buffer(char *b, int size)
{
int byte, index;

for (byte = 0; byte < size; byte += 10)
{
printf("%08x: ", byte);

for (index = 0; index < 10; index++)
{
if ((index + byte) >= size)
printf("   ");
else
printf("%02x ", *(b + index + byte));
}

for (index = 0; index < 10; index++)
{
if ((index + byte) >= size)
break;

unsigned char c = *(b + index + byte);
printf("%c", (c >= 32 && c <= 126) ? c : '.');
}

printf("\n");
}

if (size <= 0)
printf("\n");
}
