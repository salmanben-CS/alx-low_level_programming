#include <stdio.h>
#include "main.h"
/**
* more_numbers -prints numbers 10 times from 0 to 14
*Return: void
*/
void more_numbers(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 2; j++)
for (k = 48; k <= 57; k++)
{
if (j == 1 && k == 53)
break;
if (j == 1)
_putchar(49);
_putchar(k);
}
_putchar('\n');
}
}
