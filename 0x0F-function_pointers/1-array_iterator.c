#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute an action on each element of array
 *@array : array
 *@size : the size of array
 *@action : a pointer function
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
action(array[i]);
}
