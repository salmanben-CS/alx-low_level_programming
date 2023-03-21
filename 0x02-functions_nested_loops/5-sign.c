#include<stdio.h>
#include "main.h"
/**
* print_sign - check the sign.
*
* Return: 1 if is > 0 and 0 if is == 0
* and -1 if is <0
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}	

