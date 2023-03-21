#include<stdio.h>
#include "main.h"
/**
*9-times_table.c - prints the 9 times table, starting with 0.
*Return : void
*/
void times_table(void)
{
int row, col;
for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
printf("%3d, ", row * col);
}
printf("\n");
}
}
