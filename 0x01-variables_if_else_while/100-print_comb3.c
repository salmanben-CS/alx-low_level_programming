#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main entry.
*
* Return: Always 0
*/
/* more headers goes there */

/* betty style doc for function main goes there */
/* The function generates  random integer between -RAND_MAX/2 and RAND_MAX/2.*/
int main(void)
{
int i, j;
for (i = 48; i <= 57; ++i)
{
for (j = i + 1; j <= 57; ++j)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
}
return (0);
}
