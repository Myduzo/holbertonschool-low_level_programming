#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  a function that creates a new dog.
 * @name : char
 * @age : float
 * @owner : char
 * Return: 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, t, u;
char *x, *y;
dog_t *new;

new = malloc(sizeof(dog_t));
if (!new)
return (NULL);

for (i = 0; name[i] != '\0'; i++)
;
x = malloc(sizeof(char) * i);
if (!x)
{
free(new);
return (NULL);
}

for (t = 0; t <= i; t++)
x[t] = name[t];

for (j = 0; owner[j] != '\0'; j++)
;
y = malloc(sizeof(char) * j);
if (!y)
{
free(new);
free(x);
return (NULL);
}

for (u = 0; u <= j; u++)
y[u] = owner[u];


new->name = x;
new->owner = y;
new->age = age;

return (new);
}
