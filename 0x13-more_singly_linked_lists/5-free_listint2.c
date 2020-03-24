#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - a function that frees a list
* @head : node
*
*/
void free_listint2(listint_t **head)
{
listint_t *node;

while (head != NULL)
{
node = head;
head = head->next;
free(node);
}
head = NULL;
}
