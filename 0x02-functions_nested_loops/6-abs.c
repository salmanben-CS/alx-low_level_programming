#include<stdio.h>
#include "main.h"
/**
* -abs - check the sign.
*
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
