#include "lists.h"

/**
 * listint_len - Gets the number of elements in a linked list
 * @h: Pointer to the first element in a list
 *
 * Return: Number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 1;
	const listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	temp = h;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
		counter++;
	}

	return (counter);
}
