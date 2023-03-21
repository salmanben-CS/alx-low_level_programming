#include<stdio.h>
#include "main.h"
/**
* main - main entry.
*
* Return: Always 0
*/
int main(void)
{
char mot[20] = "_putchar";
int i = 0;
while (mot[i] != '\0')
{
_putchar(mot[i]);
i++;
}
putchar('\n');
return (0);
}
