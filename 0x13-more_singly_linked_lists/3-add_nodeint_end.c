#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - a function that adds a node at the end.
* @head : node
* @n : const int
* Return: adress of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

listint_t *node = *head;

new_node->n = n;
new_node->next = NULL;

if (!head || !new_node)
return (NULL);

if (*head == NULL)
*head = new_node;

else
{
while (node->next != NULL)
node = node->next;

node->next = new_node;
}
return (new_node);
}
