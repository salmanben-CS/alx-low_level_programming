#include <stdio.h>
#include "main.h"
/**
* print_rev -prints the reverse of string to the stdout
*@s: is a pointer points on the string that his reverse will be printed
* Return:void
*/
void print_rev(char *s)
{
int i, n;
n = 0;
for (i = 0; s[i] != '\0'; i++)
n++;
for (i = n; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
