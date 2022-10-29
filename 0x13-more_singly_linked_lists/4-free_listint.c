#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to the first element of a linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t **temp = (listint_t **)malloc(sizeof(listint_t *));

	*temp = head;

	while (head != NULL)
	{
		while (*temp != NULL)
		{
			*temp = *temp->next;
		}
		free (*temp);
	}

	free (temp);
}
