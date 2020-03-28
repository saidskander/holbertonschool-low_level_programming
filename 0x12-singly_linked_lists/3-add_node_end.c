#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * length_str - length_str
 * @ls : const char *s
 * Return: x
 */
int length_str(const char *ls)
{
int x;
for (x = 0; ls[x] != '\0'; x++)
;
return (x);
}
/**
 * *add_node_end - *add_node_end
 * @head : list_t **head
 * @str : const char *str
 * Return: ls
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *t;
list_t *ls;
t = *head;
ls = malloc(sizeof(list_t));
if (ls == NULL)
return (NULL);
ls->str = strdup(str);
ls->len = length_str(str);
ls->next = NULL;
if (*head == NULL)
{
*head = ls;
return (ls);
}
for (; t->next; t = t->next)
;
t->next = ls;
return (ls);
}
