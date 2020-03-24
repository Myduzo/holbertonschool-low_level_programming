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

listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

while (x < idx)
x++;

new->n = n;
new->next = *head;
*head = new;

return (new);
}
