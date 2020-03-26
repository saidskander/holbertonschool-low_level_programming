#include "lists.h"
/**
  * reverse_listint - reverse_listint
  * @head: listint_t **head
  * Return: reverse like a miror <3
  */
listint_t *reverse_listint(listint_t **head)
{
listint_t *rev = *head;
listint_t *tmp = *head;
*head = NULL;
for (; rev;)
{
tmp = tmp->next;
rev->next = *head;
*head = rev;
rev = tmp;
}
return (*head);
}
