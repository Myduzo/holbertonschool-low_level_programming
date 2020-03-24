#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* listint_len - a function that prints all the element.
* @h : const
* Return: nb of elements
*/
size_t listint_len(const listint_t *h)
{
int x;
x = 0;

while (h != NULL)
{
h = h->next;
x++;
}
return (x);
}
