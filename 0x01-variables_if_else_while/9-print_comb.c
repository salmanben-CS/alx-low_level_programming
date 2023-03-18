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
int i;
for (i = 48; i <= 57; ++i)
{
putchar(i);
if (i == 57)
{
putchar(' ');
break;
}
putchar(',');
putchar(' ');
}
return (0);
}
