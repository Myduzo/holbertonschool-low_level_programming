#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints a struct dog
 * @d : struct dog
 * Return: 0.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
d->name = "(nil)";

if (d->age == NULL)
d->age = "(nil)" : printf("Age: %f\n", d->age);

d->owner == NULL ? printf("(nil)\n") : printf("Owner: %s\n", d->owner);

else
printf("Name: %s\n", d->name);

}
}
