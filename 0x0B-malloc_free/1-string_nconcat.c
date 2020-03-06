#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string.
 * @str: string.
 * Return: string.
 */
char *_strdup(char *str)
{
int i, j;
char *p;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
p = malloc(sizeof(char) * i + 1);
if (p == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
p[j] = str[j];
}
p[j] = '\0';
return (p);
}
