#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that multiplies two numbers.
* @argc : NB of arg
* @argv : String
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int mult;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
}
return (0);
}
