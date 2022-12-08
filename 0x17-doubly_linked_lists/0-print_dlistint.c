#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlist.
 * @h: Pointer to the first element of the list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp_p;
	int counter = 0;

	if (h == NULL)
	{
		return (0);
	}

	printf("%d\n", h->n);
	counter++;
	temp_p = h->next;

	while (temp_p != NULL)
	{
		printf("%d\n", temp_p->n);
		counter++;
		temp_p = temp_p->next;
	}

	return (counter);
}
