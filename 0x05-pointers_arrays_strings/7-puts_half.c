#include <stdio.h>
#include "main.h"
/**
* puts_half -prints the half  of string to the stdout
*@str: is a pointer points on the string
* Return:void
*/
void puts_half(char *str)
{
int i, n;
n = 0;
for (i = 0; s[i] != '\0'; i++)
n++;
n = n / 2;
for (i =  n; s[i] != '\0'; i++)
_putchar(s[i]);
_putchar('\n');
}
