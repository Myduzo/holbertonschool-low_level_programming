#include "dog.h"
#include <stdlib.h>
/**
 * int_dog - a function that initialize a variable of type struct dog.
 * @name : char
 * @age : float
 * @owner : char
 * Return: 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  int i, j;
  char *x, *y;
for (i = 0; name[i] != 0; i++)
;
  x = malloc(sizeof(char) * i);
  if (!x)
  return (NULL);
for (j = 0; owner[j] != 0; j++)
;
  y = malloc(sizeof(char) * j);
  if (!y)
  return (NULL);

  return (x);
  return (y);
}
