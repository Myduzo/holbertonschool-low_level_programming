#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @n : unsigned int.
 * @s1 : char.
 * @s2 : char.
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, x, y, z;
char *s3;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] < s2[n]; j++)
;
s3 = malloc((sizeof(char) * i) + (sizeof(char) * n) + 1);
if (!s3)
{
return (NULL);
}
for (x = 0; x < i; x++)
{
s3[x] = s1[x];
}
for (y = 0, z = 0; y < n; y++, z++)
{
s3[z] = s2[y];
}
return (s3);
}
