#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* pop_listint - a function that delets the head
* @head : first node.
* Return: 0.
*/
int pop_listint(listint_t **head)
{

listint_t *node = *head, *prev;

if (node != NULL)
{
*head = node->next;
free(node);
return (0);
}

while (node != NULL)
{
prev = node;
node = node->next;
}

if (node == NULL)
return (0);

prev->next = node->next;
free(node);

return (0);
}
