#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  pop_listint
 * @head : listint_t **head
 * Return: x
 */
int pop_listint(listint_t **head)
{
int x;
if (*head == NULL)
return (0);
x = (*head)->n;
free(*head);

*head = (*head)->next;
return (x);
}

