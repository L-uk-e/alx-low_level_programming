#include "lists.h"

/**
 * sum_dlistint - Gets the sum of all the data(n) of a dlistint_t
 * @head: Pointer to the first element of the list
 *
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp_p;

	temp_p = head;

	while (temp_p != NULL)
	{
		sum += temp_p->n;
		temp_p = temp_p->next;
	}

	return (sum);
}
