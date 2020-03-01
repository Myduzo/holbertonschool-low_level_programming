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
printf("%s\n", argv[i]);
sum += atoi(argv[i]);
if (sum != )
}
return (0);
}
