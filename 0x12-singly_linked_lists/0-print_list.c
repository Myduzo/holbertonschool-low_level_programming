#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* print_list - a function that prints all the elements of a list.
* @h : const
* Return: 0.
*/
size_t print_list(const list_t *h)
{
int i;


for (i = 0; h != NULL; i++)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", h->len, h->str);

h = h->next;
}
return (i);
}
