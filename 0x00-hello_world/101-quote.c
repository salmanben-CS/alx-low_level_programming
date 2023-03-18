#include<stdio.h>
#include<string.h>
/**
* main - main entry.
*
* Return: Always 0
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
char mot[200] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
while(i < strlen(mot) )
{
putchar(mot[i]);
if(i = strlen(mot) - 1)
putchar('\n');
i++;
}

return (1);
}
