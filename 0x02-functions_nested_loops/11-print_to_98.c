#include<stdio.h>
#include "main.h"
/**
*print_to_98 -print all natural numbers 
*from n to 98
*@n:the variable where the fun start printing
*Return:don't have a return  
*/
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if ( n== 98)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
n = n + 1;
}
}
else
{
while (n >= 98)
{
printf("%d", n);
if ( n== 98)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
n = n - 1;
}
}
}
