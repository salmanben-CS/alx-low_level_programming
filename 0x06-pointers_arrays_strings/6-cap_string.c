#include <stdio.h>
#include "main.h"

/**
 * cap_string  -   capitalizes all words
 * @s:pointer point on a string
 * Return:pointer point on the new string
 */
char *cap_string(char *s)
{
int i = 0;
int word_start = 1;
while (s[i] != '\0')
{
if (word_start && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 'a' - 'A';
word_start = 0;
}
else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
word_start = 1;
}
i++;
}
return (s);
}
