#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the minimum number of coins.
* @argc : NB of arg
* @argv : String
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i, cents = 0, y = atoi(argv[1]);
int coins[5] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (y < 0)
{
printf("0\n");
}
while (y != 0)
{
for (i = 0; i < 5; i++)
{
if (y >= coins[i])
{
y = y - coins[i];
cents++;
break;
}
}
}
printf("%d\n", cents);
return (0);
}
