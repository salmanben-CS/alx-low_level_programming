#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer points on  the pointer that points
 * on the first element of the list
 * @str: string value of the new list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *new_list = malloc(sizeof(list_t));
if (new_list == NULL)
{
printf("Error\n");
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
;
new_list->str = strdup(str);
new_list->len = i;
if (*head == NULL)
{
*head = new_list;
new_list->next = NULL;
}
else
{
list_t *parc = *head;
while (parc->next != NULL)
parc = parc->next;
parc->next = new_list;
new_list->next = NULL;
}
return (new_list);
}
