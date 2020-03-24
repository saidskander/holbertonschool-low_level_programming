#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_end - *add_nodeint_end
 * @head : listint_t **head
 * @n : const int n
 * Return: add_last
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *add_last, *x;
x = *head;
add_last = malloc(sizeof(listint_t));
if (add_last == NULL)
return (NULL);
add_last->n = n;
add_last->next = NULL;
if (*head == NULL)
{
*head = add_last;
return (add_last);
}
for (; x->next; x = x->next)
;
x->next = add_last;
return (add_last);
free(add_last);
}
