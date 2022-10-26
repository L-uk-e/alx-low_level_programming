#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list
 * @h: The first element in the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int x = 0;
	const list_t *temp = (list_t *)malloc(sizeof(list_t));

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		x++;
	}

	return (x);
}
