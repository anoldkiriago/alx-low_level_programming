#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Entry point
 * @d: pointer
 * @name: name of the dog
 * @age: its age
 * @owner: owners info
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
