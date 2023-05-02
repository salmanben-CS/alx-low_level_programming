#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - remove the head note
* @head: poniter points on  the first node
* Return: the head node data or 0 if list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *tmp = (*head)->next;
if (*head == NULL)
return (0);
free(*head);
*head = tmp;
return (tmp->n);
}
