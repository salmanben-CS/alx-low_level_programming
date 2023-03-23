#include <stdio.h>
#include "main.h"
/**
* print_triangle -prints triangle using '#'
*@size: design the size oftriangle
*Return: void
*/
void print_triangle(int size)
{
int i, j, k;
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
_putchar(' ');
for (k = 0; k < i + 1; k++)
_putchar('#');
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
