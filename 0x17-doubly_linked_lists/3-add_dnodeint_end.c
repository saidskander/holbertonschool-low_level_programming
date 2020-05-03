#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - *add_dnodeint_end
 * @head: **head
 * @n: const int n for a new node
 * Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp, *newnode;
if (head == NULL)
return (NULL);
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
newnode->prev = NULL;
*head = newnode;
return (newnode);
}
tmp = *head;
for (; tmp->next != NULL;)
tmp = tmp->next;
tmp->next = newnode;
newnode->prev = tmp;
return (newnode);
}
