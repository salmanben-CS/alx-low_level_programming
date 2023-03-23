#include<stdio.h>
#include "main.h"
/**
* _isupper - check  if the letter is upper or not.
*@c:the variable that the function well check it
* Return: 1 if c is upper
* and 0 otherwise
*/
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);

}
