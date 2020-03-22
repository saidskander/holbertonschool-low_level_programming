#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add_node
 * @head: pointer head
 * @str:  char string
 * Return: box
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *tmp;
tmp = (malloc(sizeof(list_t)));
if (tmp == NULL)
{
return (NULL);
}
if ((str == NULL) && (tmp->str != NULL))
{
return (NULL);
free(tmp);
}
for (; str[len]; len++)
tmp->str = strdup(str);
tmp->len = len;
tmp->next = *head;
*head = tmp;
return (tmp);
}
