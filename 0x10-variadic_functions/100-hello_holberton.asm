#include <stdio.h>
#include <unistd.h>
/**
*
*
*
*/
int main()
{
char c[16] = "Hello, Holberton";
int fd, wr;
wr = write (fd, c, sizeof(c));
return (0);
}
