#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copy n character of src to dest
 * @dest:the first str
 * @src:the second string
 * @n:number of bytes
 * Return:returns pointer points on the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
