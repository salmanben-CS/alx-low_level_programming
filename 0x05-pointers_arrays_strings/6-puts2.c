#include <stdio.h>
#include "main.h"
/**
* puts2 -prints  every other character of a string
*@str: is a pointer points on the string
* Return:void
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
_putchar(str[i]);
_putchar('\n');
}
