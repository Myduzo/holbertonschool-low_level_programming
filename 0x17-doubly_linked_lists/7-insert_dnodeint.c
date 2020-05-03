#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h : the head node.
* @idx : the position of a specific node.
* @n : the data.
* Return: new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int x = 0;
dlistint_t *new, *tmp;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = NULL;

if (!h)
return (NULL);

tmp = *h;
while (tmp)
{
if (x == idx)
{
new->prev = tmp;
new->next = tmp->next;
tmp->next = new;
return (new);
}
tmp = tmp->next;
x++;
}
if (x == idx)
return (add_dnodeint_end(h, n));

return (NULL);
}
