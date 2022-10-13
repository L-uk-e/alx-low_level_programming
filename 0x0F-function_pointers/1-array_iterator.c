#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on elements
 * @array: pointer to array
 * @size: size of array
 * @action: function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	for (j = 0; j < size; j++)
	{
		action(*(array + j));
	}
}
