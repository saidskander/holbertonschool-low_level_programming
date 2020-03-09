#include <stdio.h>
#include "dog.h"
/**
 * init_dog -  variable function of type initdog
 * @d : pointer to struct dog
 * @name : input pointer
 * @age : input float
 * @owner : input string pointer
 */
void init_dog(struct dog *d, float age, char *name, char *owner)
{
{
d->name = name;
d->owner = owner;
d->age = age;
}
}
