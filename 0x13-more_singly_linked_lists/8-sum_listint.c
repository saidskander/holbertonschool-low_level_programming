#include "lists.h"
/**
 * sum_listint - sum_listint
 * @head : listint_t *head
 * Return: x
 */
int sum_listint(listint_t *head)
{
int x = 0;
if (head == NULL)
return (0);
for (; head; head = head->next)
{
x += head->n;
}
return (x);
}
