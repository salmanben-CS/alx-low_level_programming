#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_list -  free a list.
 * @head: pointer points on  the pointer that points
 * on the first element of the list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *tmp;
if (head == NULL)
{
printf("Error\n");
return;
}
list_t *parc = head;
while (parc != NULL)
{
tmp = parc;
free(tmp->str);
free(tmp);
parc = parc->next;
}
}
