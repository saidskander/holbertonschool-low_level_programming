#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - delete_nodeint_at_index
  * @head: listint_t **head
  * @index: unsigned int index
  * Return: head pointer
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *dlt, *o;
if (!head || !*head)
{
return (-1);
}
dlt = *head;
if (index == 0)
{
*head = (*head)->next;
free(dlt);
return (1);
}
for (i = 0; i < (index - 1); i++)
{
dlt = dlt->next;
if (dlt == NULL)
{
return (-1);
}
}
o = dlt->next;
dlt->next = o->next;
free(o);
return (1);
}
