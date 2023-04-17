#include "main.h"
#include <stdlib.h>
/**
 * init_dog - initialise a variable
 * @d: pointer structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	struct dog a;

	if (d == NULL)
		return;
	d = &a;

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (0);
}
