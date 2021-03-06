#ifndef sweet_dog_h

#define sweet_dog_h

/**
 *struct dog - struct dog
 *@age : float
 *@owner : string
 *@name : string
 *Description: name, owner, and age.
 */
typedef struct dog
{
float age;
char *name;
char *owner;
}

dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

void free_dog(dog_t *d);

int _putchar(char c);

void print_dog(struct dog *d);

#endif
