#include <stdio.h>
#include "main.h"

/**
* main - the entry point of the program
* @argc : the size of argv
* @argv : array contains command line-arguments
* Return: Always 0
*/
int main(int argc, char **argv)
{
int i = 0;
while (argv[0][i] != '\0')
{
_putchar(argv[0][i]);
i++;
}
_putchar('\n');
return (0);
}
