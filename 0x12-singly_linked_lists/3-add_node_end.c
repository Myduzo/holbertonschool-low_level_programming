#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - a function that addss a new node at the add_node_end.
* @head : new node
* @str : const char
* Return: 0.
*/
list_t *add_node_end(list_t **head, const char *str)
{
int x = 0;

list_t *last = *head;
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->next = NULL;

while (str[x] != '\0')
x++;

new->len = x;

if (*head == NULL)
{
*head = new;
return (new);
}

while (last->next != NULL)
last = last->next;

last->next = new;
return (new);
}
