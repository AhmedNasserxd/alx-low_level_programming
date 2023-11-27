#include "main.h"

/**
*append_text_to_file - to append text to the end of a file
*@filename: file name
*@text_content: string to use
*Return: result
*/
int append_text_to_file(const char *filename, char *text_content)
{
int f, status, i;

if (!filename)
return (-1);

if (!text_content)
return (1);

f = open(filename, O_APPEND | O_WRONLY);

if (f == -1)
return (-1);

for (i = 0; text_content[i] != '\0'; i++)
;

status = write(f, text_content, i);

if (status == -1)
return (-1);

close(f);
return (1);
}
