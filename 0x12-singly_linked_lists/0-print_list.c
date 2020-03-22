#include <stdio.h>
#include "lists.h"
/**
 * print_list - print_list
 * @h : const list_t h
 * Return: n
 */
size_t print_list(const list_t *h)
{
int x = 0;
for (; h != NULL; x++)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (x);
}
