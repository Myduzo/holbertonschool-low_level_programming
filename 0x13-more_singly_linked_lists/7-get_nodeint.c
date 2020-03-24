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
unsigned int count = 0;

while (head && count < index)
{
head = head->next;
count++;
}

return (head);
}
