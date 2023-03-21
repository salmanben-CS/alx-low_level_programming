#include<stdio.h>
#include "main.h"
/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line.
*
* Return: don't have return
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
