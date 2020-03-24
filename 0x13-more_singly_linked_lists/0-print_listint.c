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
int x = 0;
const listint_t *node = h;

while (node != NULL)
{
printf("%d\n", node->n);
node = node->next;
x++;
}
return (x);
}
