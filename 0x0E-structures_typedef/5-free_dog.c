#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees up space held ny dog
 * @d: pointer to the structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
