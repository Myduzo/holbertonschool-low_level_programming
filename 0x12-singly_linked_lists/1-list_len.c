#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* list_len - a function that returns the number of elements.
* @h : const
* Return: 0.
*/
size_t list_len(const list_t *h)
{
int x;

for (x = 0; h != NULL; x++)
{
h = h->next;
}
return(x);
}