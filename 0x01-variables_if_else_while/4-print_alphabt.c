#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - main entry.
*
* Return: Always 0
*/
/* more headers goes there */

/* betty style doc for function main goes there */
/* The function generates  random integer between -RAND_MAX/2 and RAND_MAX/2.*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c == 'q' || c == 'e')
continue;
putchar(c);
}
putchar('\n');
return (0);
}
