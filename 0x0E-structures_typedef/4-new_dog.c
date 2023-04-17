#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * new_dog - create new dog
 * @name: first member value
 * @age: second member value
 * @owner:third member value
 *Return: pointer variable of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *d = malooc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
