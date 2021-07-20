#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data on a dog
 * @name: Name string
 * @age: Age float
 * @owner: Name of owner string
 *
 * Description: Data about a dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
