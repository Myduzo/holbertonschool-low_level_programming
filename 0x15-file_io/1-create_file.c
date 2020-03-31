#include "holberton.h"
/**
* create_file - create a function that create a file.
* @filename : file name.
* @text_content : text.
* Return: 0.
*/
int create_file(const char *filename, char *text_content)
{
int fd, x = 0, wt;

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

if (filename == NULL)
return (-1);

if (text_content)
{
for (; text_content[x]; x++)
;
}

else
text_content = "";

wt = write(fd, text_content, x);

if (wt == -1)
return (-1);

close(fd);
return (1);
}
