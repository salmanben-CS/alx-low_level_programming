#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - add new element to the end of list
* @head: poniter points on  the first node
* @n: the new element
* Return: the address of the new element or null if failled
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
new_node->next = NULL;
}
else
{
listint_t *parc = *head;
while (parc->next != NULL)
{
parc = parc->next;
}
parc->next = new_node;
new_node->next = NULL;
}
return (new_node);
}
