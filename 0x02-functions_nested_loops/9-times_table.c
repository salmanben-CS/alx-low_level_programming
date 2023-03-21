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
printf("%2d", row * col);
if (col < 9 && col != '81')
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
