#include<stdio.h>
#include "main.h"
/**
* print_to_98: print all natural numbers 
* from n to 98
*
* Return:don't have a return  
*/
void print_to_98(int n)
{
int i = 1;
while (n <= 98)
{
printf("%d", n);
n = n + i;
i++;
}
}
