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
unsigned int x = 0, count = 0;

listint_t *temp = *head;
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

if (*head == NULL && idx != 0 )
return (NULL);

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

while (temp != NULL)
{
temp = temp->next;
count++;
}

if (count < idx)
return (NULL);

temp = *head;

while (x < (idx - 1))
{
temp = temp->next;
x++;
}
new->n = n;
new->next = temp->next;
temp->next = new;

return (new);
}
