#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index -  inserts a new node at a given position.
* @head: poniter points on  the first node
* @idx : the index of new node
* @n : data of new node
* Return:   the address of new node or null if failled
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
new_node->next = NULL;

}
else if (idx == 0)
{
new_node->next = *head;
*head = new_node;
}
else
{
for (i = 0; i < idx - 1; i++)
{
if (*head == NULL)
return (NULL);
*head = (*head)->next;
}
if ((*head)->next == NULL)
{
(*head)->next = new_node;
new_node->next = NULL;
}
else
{
new_node->next = *head;
(*head)->next = new_node;
}
}
return (new_node);
}
