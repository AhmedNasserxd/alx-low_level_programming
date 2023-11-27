#include "main.h"

/**
*main - to copy content from filef to filet.
*@ac: number to use
*@av: array to use
*Return: Always 0 (Success)
*/
int main(int ac, char **av)
{
int filef, filet;
ssize_t status_i = 1024, status_o, close_file;
char buffer[1024];
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
filef = open(av[1], O_RDONLY);
if (filef == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
filet = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (filet == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
while (status_i == 1024)
{
status_i = read(filef, buffer, 1024);
if (status_i == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
status_o = write(filet, buffer, status_i);
if (status_o == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
}
close_file = close(filef);
if (close_file == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef), exit(100);
close_file = close(filet);
if (close_file == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filet), exit(100);
return (0);
}
