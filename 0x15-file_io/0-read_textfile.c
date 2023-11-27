#include "main.h"

/**
*read_textfile - to read a text file and print it to POSIX stdout
*@filename: file name
*@letters: number of letters to use
*Return: result
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t countr, countw;
char *buffer;

if (!filename)
return (0);

f = open(filename, O_RDONLY);
if (f == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
close(f);
return (0);
}

countr = read(f, buffer, letters);
if (countr == -1)
{
free(buffer);
close(f);
return (0);
}

countw = write(STDOUT_FILENO, buffer, countr);
if (countw == -1 || (size_t)countw != (size_t)countr)
{
free(buffer);
close(f);
return (0);
}

free(buffer);
close(f);
return (countw);
}
