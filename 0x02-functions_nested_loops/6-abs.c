#include<stdio.h>
#include "main.h"
/**
* _abs - check the sign.
*@n:the variable that the func will return its abs
* Return: the absolute value of the value passed
*/
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (0);
}
else
{
return (-n);
}
}
