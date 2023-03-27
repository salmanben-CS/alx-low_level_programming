#include <stdio.h>
#include "main.h"
/**
*_strcpy -copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest
*@src: is a pointer points on the source string
*@dest: is a pointer points on the destination  string
* Return:the dest string
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);

}
