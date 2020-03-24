#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* print_listint - a function that prints all the element.
* @h : const
* Return: nb of elements
*/

size_t print_listint(const listint_t *h)
{
int x;

x = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
x++;
}
return (x);
}
