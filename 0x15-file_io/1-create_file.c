#include "main.h"

/**
*create_file - to create a file with read/write access
*@filename: file name
*@text_content: string to use
*Return: result
*/
int create_file(const char *filename, char *text_content)
{
int f, status, i;

if (!filename)
return (-1);

f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (f == -1)
return (-1);

if (text_content)
{
for (i = 0; text_content[i] != '\0'; i++)
;

status = write(f, text_content, i);

if (status == -1)
{
close(f);
return (-1);
}
}

close(f);
return (1);
}
