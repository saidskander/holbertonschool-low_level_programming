#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free_listint
 * @head : listint_t *head
 */
void free_listint(listint_t *head)
{
listint_t *x;
for (; head; head++)
{
x = head;
free(x);
}
}
