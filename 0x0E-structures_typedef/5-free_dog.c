#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_dog - free dog
 * @d : variable of dog_t type
 *Return: pointer variable of type dog_t
 */
void free_dog(dog_t *d)
{
free(d);
}
