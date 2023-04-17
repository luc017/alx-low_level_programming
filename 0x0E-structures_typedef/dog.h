#ifndef dog_h__
#define dog_h__
/**
 * struct dog - dog details
 * @name: name of the dog
 * @age:  age of the dog
 * @owner: owner of the dog
 *
 * Description: details of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strncpy(char *dest, char *src, int b);
#endif
