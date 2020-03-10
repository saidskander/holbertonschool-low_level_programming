#include <stdio.h>
#include "dog.h"
/**
 * print_dog - func print a struct dog
 * @d : pointer
 * Return : void print_dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->owner == NULL)
{
printf("Name: (nil)");
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
