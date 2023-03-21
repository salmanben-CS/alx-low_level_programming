#include<stdio.h>
#include "main.h"
/**
* _islower - check if the letter is lower or no.
* c :letter passed as arg
* Return: 1 if c is lower. and 0 if no
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
