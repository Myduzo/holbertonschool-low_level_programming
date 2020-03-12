#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the opcodes of its own main function.
* @argc : int.
* @argv : char.
* Return: 0.
*/
void main (int argc, char *argv[])
{
int x;
x = atoi(argv[2]);

if (argc != 2)
printf("Error\n");
exit(1);

if (argv[1] < 0)
printf ("Error\n");
exit(2);

}
