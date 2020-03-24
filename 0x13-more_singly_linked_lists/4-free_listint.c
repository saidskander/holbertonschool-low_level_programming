#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free_listint
 * @head : listint_t *head
 * Return : nothing
 */
void free_listint(listint_t *head)
{
listint_t *x;
for (; head; x++)
{
x = head;
free(x);
}
}
