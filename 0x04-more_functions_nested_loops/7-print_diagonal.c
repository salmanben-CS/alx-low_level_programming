#include <stdio.h>
#include "main.h"
/**
* print_diagonal -prints line using '\'
*@n: design the number of '\' will be printed
*Return: void
*/
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar('\\');

_putchar('\n');
}
}
