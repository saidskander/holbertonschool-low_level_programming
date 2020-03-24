#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free_listint2
 * @head : listint_t **head
 */
void free_listint2(listint_t **head)
{
listint_t *fre;
if (head == NULL)
return;
for (; *head; fre++)
{
fre = *head;
free(fre);
}
head = NULL;
}
