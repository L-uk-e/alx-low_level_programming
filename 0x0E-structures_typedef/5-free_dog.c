#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory from dog created
 * @d: pointer to the created dog in memory
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
