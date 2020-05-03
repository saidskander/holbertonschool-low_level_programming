#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free_ dlistint_t
 * @head : dlistint_t *head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next;
for (; head != NULL; head = next)
{
next = head->next;
free(head);
}
}
