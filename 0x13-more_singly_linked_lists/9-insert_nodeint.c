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

listint_t *temp = *head;

listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

while (x < idx)
{
temp = temp->next;
x++;
}

if (new != NULL)
{	
new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;	
}

else
{
new->next = temp->next;
temp->next = new;
}

return (new);
}

return (NULL);
}
