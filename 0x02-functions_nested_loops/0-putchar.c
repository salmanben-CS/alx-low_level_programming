#include<stdio.h>
#include "main.h"
/**
* main - main entry.
*
* Return: Always 0
*/
int main(){
char mot[20] = "_putchar";
int i = 0;
while (mot[i] != '\0')
{
putchar(mot[i]);
i++;
} 
putchar('\n');
return (0);
}
