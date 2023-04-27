#include <stdio.h>
#include "lists.h"
/**
 * list_len -  count the number of elements in a linked list_t list.
 * @h: pointer points on the first element of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
