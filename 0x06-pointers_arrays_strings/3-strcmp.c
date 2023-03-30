#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares  two strings.
 * @s1:the first str
 * @s2:the second string
 * Return:void
 */
int _strcmp(char *s1, char *s2)
{
int i, diff;
for (i = 0; s1[i] != '\0' && s2 != '\0'; i++)
{
if (s1[i] == s2[i])
continue;
else
{
diff = s1[i] - s2[i];
return (diff);
}
}
return (0);
}
