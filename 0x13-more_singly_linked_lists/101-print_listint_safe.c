#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_listint_safe - print list. 
* @head : list
* Return: 0.
*/
size_t print_listint_safe(const listint_t *head)
{
int count = 0;

if (!head)
exit(98);

while (head != NULL)
{
head = head->next;
printf("[%p] %d\n", (void *)head, head->n);
count++;
}
return (count);
}
