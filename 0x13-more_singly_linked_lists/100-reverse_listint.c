#include "lists.h"

/**
* reverse_listint - reverse a list.
* @head : list
* Return: 0.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *temp = (*head)->next;
listint_t *prev = NULL;

while (*head != NULL)
{
temp = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = temp;
}

*head = prev;

return (*head);
}
