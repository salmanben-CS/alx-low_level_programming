#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all element of a list
 * @h: pointer points on the first element of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count;
count = 0;
list_t *parc = h;
if (parc == NULL)
{
exit(0);
}
while (parc != NULL)
{
if (parc->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", parc->len, parc->str);
count++;
parc = parc->next;
}
return (count);
}
