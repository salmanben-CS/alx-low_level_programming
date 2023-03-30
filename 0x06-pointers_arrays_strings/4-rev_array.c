#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverese array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, j, tmp;
for (i = 0, j = n - 1; i < j; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
