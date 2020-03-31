#include "holberton.h"
/**
* cp_content - copies the content of a file to another file.
* @filename : file name.
* @text_content : text.
* Return: 0.
*/
int main(int argc, char *argv[])
{
int file_from, file_to;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit (97);
}

file_from = open(argv[1], O_RDONLY);

if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
	exit (98);
}

file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);

if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
	exit (99);
}

return (0);
}
