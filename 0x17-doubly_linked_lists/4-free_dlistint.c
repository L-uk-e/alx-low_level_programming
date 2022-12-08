#include "lists.h"

/**
 * free_dlistint - Frees a dlist
 * @head: Pointer to first element of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return;
	}

	temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
