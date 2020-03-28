#include "holberton.h"
#include <stdlib.h>
/**
* strtow - a function that splits a string into words.
* @str: char.
* Return: Always 0.
*/
char **strtow(char *str)
{
  int i;
  char *c;


  for (i = 0; str[i] != '\0'; i++)
  {
      if (str[i] == ' ' || str[i] == '\t')
      str[i] = '\n';
  }

  c = malloc (sizeof (char) * i);
  if (!c)
  return (NULL);

  if (str == NULL || str[i] == '\0')
  return (NULL);

  return (c);
}
