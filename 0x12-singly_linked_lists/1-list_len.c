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
list_t *parc = h;
while (parc != NULL)
{
count++;
parc = parc->next;
}
return (count);
}
