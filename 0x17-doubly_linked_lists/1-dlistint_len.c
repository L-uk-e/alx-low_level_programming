#include "lists.h"

/**
 * dlistint_len - Gets number of elements in a list
 * @h: Reference to the first element of the node
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;
	dlistint_t *temp_p;

	if (h == NULL)
	{
		return (counter);
	}
	counter++;

	temp_p = h->next;

	while (temp_p != NULL)
	{
		counter++;
		temp_p = temp_p->next;
	}

	return (counter);
}
