#include <stdio.h>
#include "main.h"

/**
 * cap_string  -   capitalizes all words
 * @s:pointer point on a string
 * Return:pointer point on the new string
 */
char *cap_string(char *s)
{
int i, ascii, ascii_before;
ascii = s[0];
if (ascii >= 97 && ascii <= 120)
{
ascii -= 32;
s[0] = ascii;
}
for (i = 1; s[i] != '\0'; i++)
{
ascii = s[i];
ascii_before = s[i - 1];
if (ascii >= 97 && ascii <= 120 &&
((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n')
||
(ascii_before < 65) || (ascii_before > 120)))
{
ascii -= 32;
s[i] = ascii;
}
}
return (s);
}
