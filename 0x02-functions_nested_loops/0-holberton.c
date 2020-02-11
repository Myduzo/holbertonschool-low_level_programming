#include <holberton.h>
/**
 * main - Print "Holberton" followed by a new line.
 * 
 * Return: 0
 */
int main(void)
{
char x[] = "Holberton";
int i = 0;
while (x[i] != '\0')
{
_putchar(x[i]);
i++;
}
_putchar('\n');
return (0);
}
