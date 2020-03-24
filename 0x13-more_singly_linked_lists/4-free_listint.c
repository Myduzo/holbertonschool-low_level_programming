#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*
*
*
*/
void free_listint(listint_t *head)
{
listint_t *node;

while (head != NULL)
{
node = head;
head = head->next;
free(node);
}
}
