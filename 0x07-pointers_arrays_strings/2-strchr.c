#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: pointer point on a string
 * @c: character searched
 * Return: the first occurrence of character or null if character not
 *found
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (NULL);
}
