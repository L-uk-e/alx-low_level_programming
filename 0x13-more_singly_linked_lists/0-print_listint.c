#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to the beginning of the list to be printed
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;
	const listint_t *temp;

	temp = (const listint_t *)malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (0);
	}

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}

	return (counter);
}
