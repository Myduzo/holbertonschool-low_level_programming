#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - a function that addss a new node at the add_node_end.
* @head : new node
* @str : const char
* Return: 0.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t* new = (list_t*) malloc(sizeof(list_t));
list_t *last = *head;
new->str = strdup(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return(NULL);
}

while (last->next != NULL)
last = last->next;

last->next = new;
return(0);
}