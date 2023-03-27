#include <stdio.h>
#include "main.h"
/**
*print_array - prints n element of an array
*@n: the number of elements printed
*@a: is a pointer point on the array
*Return : void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
