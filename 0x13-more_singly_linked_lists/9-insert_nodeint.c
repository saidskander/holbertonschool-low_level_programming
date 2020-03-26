#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - *insert_nodeint_at_index
  * @head: listint_t **head
  * @index: unsigned int index
  * @n: int n
  * Return: add
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *add, *o;
o = *head;
add = malloc(sizeof(listint_t));
if (add == NULL)
return (NULL);
add->n = n;
if (index == 0)
{
add->next = o;
*head = add;
return (*head);
}
for (; index > 1; index--)
{
o = o->next;
if (!o)
{
free(add);
return (NULL);
}
}
add->next = o->next;
o->next = add;
return (add);
}
