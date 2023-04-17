#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
int name_len = 0, owner_len = 0, i;
while (name[name_len] != '\0')
name_len++;
while (owner[owner_len] != '\0')
owner_len++;
d->name = malloc(name_len + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
for (i = 0; i <= name_len; i++)
d->name[i] = name[i];
d->owner = malloc(owner_len + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; i <= owner_len; i++)
d->owner[i] = owner[i];
d->age = age;
return (d);
}
