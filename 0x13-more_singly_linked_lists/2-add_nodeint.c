#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - *add_nodeint
 * @head : listint_t **head
 * @n :  const int n
 * Return: add_tmp
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *add_tmp;
add_tmp = malloc(sizeof(listint_t));
if (add_tmp == NULL)
return (NULL);
add_tmp->next = *head;
add_tmp->n = n;
*head = add_tmp;
return (add_tmp);
free(add_tmp);
}
