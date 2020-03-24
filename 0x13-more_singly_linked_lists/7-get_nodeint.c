#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - return the nth node of a list
* @head : first node
* @index : nb of nodes
* Return: 0.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
index = 0;
int data;

data = node->n;
*head = node->next;

if (node == NULL)
return (NULL);

while (node != NULL)
{
node = node->next;
index++;
}

return (data);
}
