#include <stdio.h>
#include "main.h"
/**
* _puts -prints string to the stdout
*@str: is a pointer points on the string that will be printed
* Return:void
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
