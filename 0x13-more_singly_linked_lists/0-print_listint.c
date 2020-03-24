#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  print_listint
 * @h : const listint_t *h
 * Return: x
 */
size_t print_listint(const listint_t *h)
{
int n = 0;
for (; h; n++)
{
printf("%d\n", h->n);
h = h->next;
}
return (n);
}
