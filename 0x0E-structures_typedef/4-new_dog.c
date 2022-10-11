#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog(var) of type dog_t
 * @name: name of dog
 * @age: age
 * @owner: name of owner
 *
 * Return: pointer(type dog_t) to the formed dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
