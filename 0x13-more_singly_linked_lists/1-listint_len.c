#include <stdio.h>
#include "lists.h"
/**
 * listint_len - listint_lenn h
 * @h : const listint_t *h
 * Return: n
 */
size_t listint_len(const listint_t *h)
{
int n = 0;
for (; h; n++)
{
h = h->next;
}
return (n);
}
