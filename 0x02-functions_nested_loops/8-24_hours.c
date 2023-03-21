#include<stdio.h>
#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
*
*/
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
printf("0");
}
printf("%d", i);
putchar(':');
if (j < 10)
{
printf("0");
}
printf("%d", j);
putchar('\n');
}
}
}
