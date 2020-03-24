#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - a function that adds a node at the end.
* @head : node
* @n : const int
* Return: adress of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

listint_t *last = *head;

new->n = n;
new->next = NULL;

if (*head == NULL)
*head = new;

else
{
while (last->next != NULL)
last = last->next;

last->next = new;
}
return (new);
}
