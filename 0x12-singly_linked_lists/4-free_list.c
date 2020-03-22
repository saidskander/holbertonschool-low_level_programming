#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list_t list.
 * @head : head
 */
void free_list(list_t *head)
{
list_t *x;
for (; head ;)
{
x = head;
head = head->next;
free(x->str);
free(x);
}
}
