#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free_list
 * @head : head
 */
void free_list(list_t *head)
{
list_t *f;
for (; head; head = head->next)
{
f = head;
free(f->str);
free(f);
}
}
