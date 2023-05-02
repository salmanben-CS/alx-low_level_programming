#include <stdio.h>
#include "lists.h"
/**
* listint_len - returns the number of  list elements
* @h: poniter points on  the first node
* Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
