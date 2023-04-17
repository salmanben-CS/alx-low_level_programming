#include "main.h"

/**
 * init_dog - initialize a structure
 * @d: structure variable
 * @name: first member value
 * @age: second member value
 * @owner: third member value
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}

