#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: structure variable
 *Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
exit(1);
if (d->name == NULL)
printf("Name: (nil)");
}
else
printf("%s", d->name);
if (d->age == NULL)
printf("Age: (nil)");
}
else
printf("%f", d->age);
if (d->owner == NULL)
printf("Owner: (nil)");
}
else
printf("%s", d->owner);
}
