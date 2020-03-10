#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d : struct dog
 */
void print_dog(struct dog *d)
{
if (d->name == NULL)
printf("Name: (nil)");
else
printf("Name: %s\n", d->name);

printf("Age: %f\n" d->age);

if (d->owner == NULL)
printf("Owner: (nil)");
else
printf("Owner: %s\n", d->owner);

if (d == NULL)
printf("");
}
