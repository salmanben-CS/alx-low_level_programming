#include <stdio.h>
#include "main.h"
/**
*rev_string -reverse a string
*@s: is a pointer points on the string that will be reversed
* Return:void
*/
void rev_string(char *s)
{
int i, j, n;
char tmp;
n = 0;
for (i = 0; s[i] != '\0'; i++)
n++;
for (i = 0, j = n - 1; i < j; i++, j--)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
}
}
