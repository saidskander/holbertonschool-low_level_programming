#include "lists.h"
/**
 * print_dlistint - print_dlistint
 * @h : head
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int x = 0;
for (; h != NULL; x++)
{
printf("%d\n", h->n);
h = h->next;
}
return (x);
}
