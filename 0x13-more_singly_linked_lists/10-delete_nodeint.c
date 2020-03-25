#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - delete a node form the list.
* @head : list
* @index : int 
* Return: 1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x = 0, count = 0;

listint_t *temp = *head;

if (temp == NULL)
return (-1);

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

while (temp != NULL)
{
temp = temp->next;
count++;
}

if (index > count)
return (-1);

temp = *head;

while (x < index - 1)
{
temp = temp->next;
x++;
}

temp->next = temp->next->next;
free(temp->next);

return (1);
}
