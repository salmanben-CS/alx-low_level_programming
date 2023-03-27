#include <stdio.h>
#include "main.h"
/**
* _strlen -returns the length of a string
*@s: is a pointer points on a string
* Return:the length of string.
*/
int _strlen(char *s)
{
int i, n;
n = 0;
for (i = 0; s[i] != '\0'; i++)
n++;
return (n);
}
