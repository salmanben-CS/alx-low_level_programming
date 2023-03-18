#include<stdio.h>
/**
* main - main entry.
*
* Return: Always 0
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main( void )
{
char mot[200] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
while( mot[i] != '\0' )
{
putchar( mot[i] );

i++;
}
putchar('\n');
return ( 1 );
}
