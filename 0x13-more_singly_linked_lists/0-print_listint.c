#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  print_listint
 * @h : const listint_t *h
 * Return: x
 */
size_t print_listint(const listint_t *h)
{
int x = 0;
for (; h; x++)
{
printf("%d\n", h->x);
h = h->next;
}
return (x);
}
