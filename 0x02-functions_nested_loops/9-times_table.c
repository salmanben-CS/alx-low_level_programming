#include<stdio.h>
#include "main.h"
/**
*times_table - prints the 9 times table, starting with 0.
*Return : void
*/
void times_table(void)
{
int row, col;
for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
if (row * col < 10)
{
printf(" ");
}
printf("%d", row * col);
if (col < 9)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
}
