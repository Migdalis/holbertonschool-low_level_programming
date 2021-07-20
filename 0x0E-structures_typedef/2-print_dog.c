#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 *print_dog - Print a struct
 *@d: Pointer to Struct
 *Description: Function for print a variable of type struct dog
 *
 **/

void print_dog(struct dog *d)
{
char age[14];
sprintf(age, "%g", d->age);
if (d != NULL)
{
printf("Name: %s\n", d->name == NULL ? "nil" : d->name);
printf("Age: %s\n", d->age <= 0.0 ? "nil" : age);
printf("Owner: %s\n", d->owner == NULL ? "nil" : d->owner);
}
}
