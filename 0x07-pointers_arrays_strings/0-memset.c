#include <stdio.h>
#include "main.h"
/**
 * _memset -set the first n bytes of memory block pointed to
 * by s to the value value
 *@s: the pointer point of memory block
 *@b: the byte value to which the memory block will be set
 *@n: the number of bytes to set in memory block
 * Return: a pointer to memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
