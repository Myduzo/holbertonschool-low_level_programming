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
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
