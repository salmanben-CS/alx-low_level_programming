#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer
 *@array : array
 *@size : the size of array
 *@cmp: function poniter
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
return (-1);
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
