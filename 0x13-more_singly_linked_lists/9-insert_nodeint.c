#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head : first node
* @idx : the index
* @n : data
* Return: 0.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x = 0;

listint_t *node = *head;

listint_t *new = malloc(sizeof(listint_t));


if (!head || !new)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{	
new->next = *head;
*head = new;
}


while (node != NULL)
{
if (x == idx - 1)
{
new->next = node ->next;
node->next = new;
}
node = node->next;
x++;
}

return (NULL);
}
