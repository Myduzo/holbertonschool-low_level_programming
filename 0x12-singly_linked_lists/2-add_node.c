#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - a function that addss a new node at the beginning.
* @head : new node
* @str : const char
* Return: 0.
*/
list_t *add_node(list_t **head, const char *str)
{
int x = 0;

list_t *new = (list_t *) malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->next = *head;
*head = new;

if (*head == NULL)
return (NULL);

while (str[x] != '\0')
{
x++;
new->len = x;
}
return (*head);
}
