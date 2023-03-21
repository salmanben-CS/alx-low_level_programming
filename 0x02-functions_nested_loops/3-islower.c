#include<stdio.h>
#include "main.h"
/**
* islower - check if the letter is lower or no.
*
* Return: 1 if is lower. and 0 if no
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}	
