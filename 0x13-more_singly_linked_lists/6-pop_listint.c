#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - a function that delets the head
* @head : first node.
* Return: 0.
*/
int pop_listint(listint_t **head)
{
listint_t *node = *head;
int data;

if (node != NULL)
{
data = node->n;
*head = node->next;
free(node);
}

else
data = 0;

return (data);
}
