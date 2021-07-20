#include "dog.h"
#include <stddef.h>

/**
 *init_dog - Initialize a struct
 *@d: Pointer to Struct
 *@name: Name to set
 *@age: Age to set
 *@owner: Owner to set
 *Description: Function for initialize a variable of type struct dog
 *
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
