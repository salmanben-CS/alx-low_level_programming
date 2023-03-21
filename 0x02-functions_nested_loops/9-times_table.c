#include<stdio.h>
#include "main.h"
/**
*9-times_table.c - prints the 9 times table, starting with 0.
*Return : void
*/
#include<stdio.h>
void times_table(void)
{
int i, j, k;
for(i = 0; i < 10; i++)
{
k = 0;
for(j = 0; j < 9; j++)
{
printf("%d",k);
printf(",  ");
k = k + i;
}
printf("\n");
}
}
