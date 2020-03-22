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
unsigned int len;
list_t *box;
box = (malloc(sizeof(list_t)));
if (box == NULL)
{
return (NULL);
}
if ((str == NULL) || (box->str != NULL))
{
return (NULL);
free(box);
}
for (len = 0; str[len]; len++)
box->str = strdup(str);
box->len = len;
box->next = *head;
*head = box;
return (box);
}
