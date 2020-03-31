#include "holberton.h"
/**
* read_textfile - reads a text file and prints it to POSIX
* @filename : file name.
* @letters : flags.
* Return: 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t rd, wt;

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);

rd = read(fd, buf, letters);

wt = write(STDOUT_FILENO, buf, rd);

if (wt == -1)
return (0);

close(fd);
return (wt);
}
