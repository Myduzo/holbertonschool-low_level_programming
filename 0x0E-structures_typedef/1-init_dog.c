#include "dog.h"
#include <stdlib.h>
/**
 * int_dog - a function that initialize a variable of type struct dog.
 * @d : dog
 * @name : char
 * @age : float
 * @owner : char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
