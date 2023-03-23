#include<stdio.h>
#include "main.h"
/**
* _isdigit - check  if the number is upper or not.
*@c:the variable that the function well check it
* Return: 1 if c is digit
* and 0 otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
