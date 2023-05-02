#include <stdio.h>
#include "lists.h"
/**
* get_nodeint_at_index - gets  the nth node of a listint_t linked list.
* @head: poniter points on  the first node
* @index: node index
* Return:   the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}

