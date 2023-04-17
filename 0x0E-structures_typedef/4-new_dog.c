#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog's data
 * @name: name of that dog
 * @age: the age of the dog
 * @owner: name of the dog
 *
 * Return: pointer to the new structure, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, ownlen, b;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog  == NULL)
		return (NULL);

	for (nlen = 0; name[nlen] != '\0'; nlen++)
		;
	for (ownlen = 0; name[ownlen] != '\0'; ownlen++)
		;

	dog->name = malloc(nlen * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (b <= nlen)
	{
		dog->name[b] = name[b];
		b++;
	}
	dog->age = age;
	dog->owner = malloc(ownlen * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	while (b <= ownlen)
	{
		dog->owner[b] = owner[b];
		b++;
	}
	return (dog);
}
