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
printf("  ");
else
printf("%02x", *(b + index + byte));

if ((index % 2) != 0 && index != 0)
printf(" ");
}

for (index = 0; index < 10; index++)
{
if ((index + byte) >= size)
break;
else
{
char current_char = *(b + index + byte);
if (current_char >= 31 && current_char <= 126)
printf("%c", current_char);
else
printf(".");
}
}

if (byte >= size)
continue;
printf("\n");
}

if (size <= 0)
printf("\n");
}
