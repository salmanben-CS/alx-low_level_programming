#include <stdio.h>
#include "lists.h"
/**
* print_listint - write list elements
* @h: poniter points on  the first node
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
printf("(nil)\n");
else
{
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
}
return (count);
}