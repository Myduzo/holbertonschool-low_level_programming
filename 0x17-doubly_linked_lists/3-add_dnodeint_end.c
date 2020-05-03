#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of the list.
* @head : the head node.
* @n : the data.
* Return: the new node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
new->prev = NULL;

if (*head == NULL)
{
*head = new;
return (*head);
}

tmp = *head;
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new;
tmp->prev = *head;

return (tmp);
}
