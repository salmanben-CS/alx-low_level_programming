#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 *@name : the name will be printed
 *@f : a ponter function
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
