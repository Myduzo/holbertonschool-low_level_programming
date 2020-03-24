#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - a function that adds a neww node at the beginning.
* @head : node
* @n : const int
* Return: nb of elements
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (*head);
}
