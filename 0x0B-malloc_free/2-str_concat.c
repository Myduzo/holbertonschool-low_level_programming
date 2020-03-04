#include "holberton.h"
#include <stdlib.h>
/**
 * _str_concat - a function that concatenates two strings.
 * @s1 : char
 * @s2 : char
 * Return: two strings.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, x, y;
char *s3;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
s3 = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);
for (x = 0; x < i; x++)
s3[x] = s1[x];
for (y = 0; y < j; y++)
s3[x + y] = s2[y];
return (s3);
}
