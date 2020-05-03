#include "lists.h"
/**
 * dlistint_len - dlistint_len
 * @h: dlistint_t pointer of a linkedlist
 * Return: i
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t x = 0;
for (; h != NULL; x++)
h = h->next;
return (x);
}
