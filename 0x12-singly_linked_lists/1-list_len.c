#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function returns number of elements list_len in a linked list.
 * @h : const list_t *h
 * Return: x
 */
size_t list_len(const list_t *h)
{
int x = 0;
for (; h != NULL; x++)
{
h = h->next;
}
return (x);
}
