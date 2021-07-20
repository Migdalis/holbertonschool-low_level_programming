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
if (d != NULL)
{
printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
if (d->age < 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
}
