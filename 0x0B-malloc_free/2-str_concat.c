#include "holberton.h"
#include <stdlib.h>
/**
 * _memcpy - copies two string.
 * @dest : char
 * @src : char
 * @n : unsigned int
 * Return: dest.
 */
 char *_memcpy(char *dest, char *src, unsigned int n)
 {
 unsigned int i;
 for (i = 0 ; i < n; i++)
 dest[i] = src[i];
 return (dest);
 }
 /**
 * _strlen - calculate string length.
 * @s: char
 * Return: string.
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
 * *_strdup - duplicate string.
 * @str: string.
 * Return: string.
 */
char *_strdup(char *str)
{
  unsigned int i, j;
  char *p;
  if (p == NULL)
  {
    return (NULL);
  }
  i = _strlen(str);
  if (str != NULL)
  {
    p = malloc(sizeof(char) * (i + 1));
  }
  j = _memcpy(p, str, i + 1);
  else
  {
    return ((char *)j);
  }
  else
  {
    return (NULL);
  }
}
