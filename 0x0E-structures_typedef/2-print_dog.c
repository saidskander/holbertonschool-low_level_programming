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
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner== NULL)
printf("Owner: %s\n", d->name);
else
printf("Owner: %s\n", d->owner);
}
