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

if (ptr == NULL)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}

if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
if (!ptr)
return (NULL);
}

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
