#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer point on a string
 * @accept: pointer point on a string
 * Return:the number of bytes in the initial segment of s.
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
int n = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
if (accept[j] == '\0')
return (n);
}
}
