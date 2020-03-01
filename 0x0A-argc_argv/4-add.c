#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints its name, followed by a new line.
* @argc : NB of arg
* @argv : String
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
if (!(*argv[i] >= '0' && *argv[i] <= '9'))
{
printf("Error\n");
return (1);
}
else
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
