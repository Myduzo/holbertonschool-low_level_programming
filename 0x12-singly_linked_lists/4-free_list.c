#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_list - a function that frees a list.
* @head : new node
* Return: 0.
*/
void free_list(list_t *head)
{
list_t* one;

while (head != NULL)
{
one = head;
head = head->next;
free(one);
}
}