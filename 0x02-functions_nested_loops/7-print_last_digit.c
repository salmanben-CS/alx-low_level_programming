#include<stdio.h>
#include "main.h"
/**
* print_last_digit .
*
* Return: value of last digit
*/
int print_last_digit(int n)
{
n = n % 10;
_putchar(n);
return (n);
}
