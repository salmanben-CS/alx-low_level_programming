#include<stdio.h>
#include "main.h"
/**
* islower - check if the letter is lower or no.
*@c:letter taht will be checked
* Return: 1 if is lower. and 0 if no
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c<= 90))
return (1);
else
return (0);
}	
