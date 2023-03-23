#include <stdio.h>
#include "main.h"
/**
* print_line -prints line using '_'
*@n: design the number of '_' will be printed
*Return: void
*/

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
