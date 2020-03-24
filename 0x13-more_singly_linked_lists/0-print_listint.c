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
unsigned int x;
const listint_t *head = h; 

x = 0;
while (head != NULL)
{
if (head->n == 0)
return (0);

else
printf("%d\n", head->n);
head = head->next;
x++;
}
return (x);
}
