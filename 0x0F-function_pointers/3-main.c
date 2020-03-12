#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that performs simple operations.
* @argc : int.
* @argv : char.
* Return: 0.
*/
int main(int argc, char *argv[])
{
int a, b, result;
int(*x)(int a, int b);
a = atoi(argv[1]);
b = atoi(argv[3]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
x = get_op_func(argv[2]);
result = x (a , b);
printf("%d\n", result);
return (0);
}
