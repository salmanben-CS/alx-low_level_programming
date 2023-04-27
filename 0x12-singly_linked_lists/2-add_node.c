#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer points on  the pointer that points
 * on the first element of the list
 * @str: string value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
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
new_list->next = *head;
*head = new_list;
}
return (new_list);
}
