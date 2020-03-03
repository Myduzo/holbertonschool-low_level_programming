#include "holberton.h"
#include <stdlib.h>
/**
* _strlen - calculate string length.
* @s: string
* Return: length i.
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * _str_concat - a function that concatenates two strings.
 * @s1 : char
 * @s2 : char
 * Return: two strings.
 */
char *str_concat(char *s1, char *s2)
{
char s3;
int i = 0, j = 0;
int x = _strlen(s1);
int y = _strlen(s2);
if (s1 == NULL)
{
s1 = malloc(sizeof(char));
s1 = "";
}
if (s2 == NULL)
{
s2 = malloc(sizeof(char));
s2 = "";
}
s3 = malloc(sizeof(char) * (x + y + 1));
if (s3 == NULL)
return (NULL);
while (i <= x)
{
s3[i] = s1[i];
i++;
}
while (j <= y)
{
s3[x + j] = s2[j];
j++;
}
return (s3);
}
