#include "lists.h"
#include <stdlib.h>
/**
 * *get_nodeint_at_index -  a function that returns the nth node of a list.
 * @head : head
 * @index : unsigned int
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
for (; (x < index) && (head->next != NULL); x++)
{
head = head->next;
}
if (x < index)
return (NULL);
return (head);
}
