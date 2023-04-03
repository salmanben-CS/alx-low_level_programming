#include <stdio.h>
#include "main.h"
/**
 * _memcpy -copy the first n bytes from the block
 *memory of src to the block memry of dest
 * by s to the value value
 *@src: the pointer points to src memory block
 *@dest: the pointer points to dest memory block
 *@n: the number of bytes to be copyk
 * Return: a pointer to memory block.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
if (src[i] == '\0')
break;
dest[i] = src[i];
}
return (dest);
}
