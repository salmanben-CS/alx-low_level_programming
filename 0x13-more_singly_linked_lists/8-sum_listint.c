#include <stdio.h>
#include "lists.h"
/**
* sum_listint - gets   the sum of all the data (n) of a listint_t linked list.
* @head: poniter points on  the first node
* Return:   the sum of data or 0 if list is empty.
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}

