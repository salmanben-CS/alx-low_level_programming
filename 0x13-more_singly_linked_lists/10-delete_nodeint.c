#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index -  deletes the node at index index of a listint_t linked list.
* @head: poniter points on  the first node
* @index : the index of  node
* Return:   1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *tmp;
for (i = 0; i < index; i++)
{
if (*head == NULL)
return (-1);
*head = (*head)->next;
}
tmp = (*head)->next;
free(*head);
*head = tmp;
return (1);
}

