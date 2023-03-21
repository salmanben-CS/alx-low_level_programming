#include<stdio.h>
#include "main.h"
/**
* print_last_digit - it prints and returns the last digit n.
*@n:the variable that the fun will prints and returns
its last digit
* Return: value of last digit
*/
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}
