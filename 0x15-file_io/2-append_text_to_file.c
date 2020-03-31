#include "holberton.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename : file name.
* @text_content : text.
* Return: 0.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, x = 0, wt;

fd = open(filename, O_WRONLY | O_APPEND, 0600);

if (fd == -1)
return (-1);

if (filename == NULL)
return (-1);

for (; text_content[x]; x++)
;

wt = write(fd, text_content, x);

if (wt == -1)
return (-1);

close(fd);
return (1);
}