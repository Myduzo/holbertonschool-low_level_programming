#include <stdio.h>
/**
 * main - a program that prints the name of the file it was compiled from, followed by a new line.
 * @argc : int
 * @argv : char
 * Return: argv.
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
