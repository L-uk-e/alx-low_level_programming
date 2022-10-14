#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: size of array
 * @cmp: pointer to a function that can be used to compare values
 *
 * Return: index of element that satisfies function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		if (cmp(*(array + j)) != 0)
		{
			return (j);
		}
	}

	return (-1);
}
