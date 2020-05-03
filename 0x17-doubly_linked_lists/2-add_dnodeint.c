#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add_dnodeint
 * @head : dlistint_t **head
 * @n : new node
 * Return: new or fail null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *createnode;
if (head == NULL)
return (NULL);
createnode = malloc(sizeof(dlistint_t));
if (createnode == NULL)
return (NULL);
createnode->n = n;
createnode->next = *head;
createnode->prev = NULL;
*head = createnode;
if (createnode->next != NULL)
(createnode->next)->prev = createnode;
return (createnode);
}
