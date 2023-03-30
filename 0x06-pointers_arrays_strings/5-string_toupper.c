#include <stdio.h>
#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @s:pointer point on a string
 * Return:pointer point on the new string
 */
char *string_toupper(char *s)
{
int i, ascii;
for (i = 0; s[i] != '\0'; i++)
{
ascii = s[i];
if (ascii >= 97)
{
ascii -= 32;
s[i] = ascii;
}
}
return (s);
}
