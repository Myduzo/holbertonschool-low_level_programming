#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - a function that concatenates all the arguments.
* @ac: int
* @av: char
* Return: Always 0.
*/
char *argstostr(int ac, char **av)
{
int i, j, s, z;
char *p;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s++;
}
s++;
}
p = malloc(sizeof(char) * s);
if (p == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
p[z] = av[i][j];
z++;
}
p[z] = '\n';
z++;
}
p[z] = '\0';
return (p);
}
