#include "lists.h"
/**
 * sum_dlistint - sum_dlistint
 * @head: pointer *head
 * Return: x
 */
int sum_dlistint(dlistint_t *head)
{
int x = 0;
for (; head != NULL; head = head->next)
{
x += head->n;
}
return (x);
}

