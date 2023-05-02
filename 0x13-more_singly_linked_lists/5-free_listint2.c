#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint2 - free list
* @head: poniter points on  the first node
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *tmp;
while ((*head) != NULL)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
