#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr : void.
 * @old_size : unsigned int.
 * @new_size : unsigned int.
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i, j;
for (i = 0; i < old_size; i++)
;
for (j = 0; j < new_size; j++)
;
ptr = malloc(sizeof(unsigned int) * i);
ptr = realloc(ptr, sizeof(unsigned int) * j);

if (ptr == NULL)
return (ptr);

if (new_size > old_size)
return (NULL);

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
}
free(ptr);
return (ptr);
}
