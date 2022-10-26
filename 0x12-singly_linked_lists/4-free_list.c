#include "lists.h"

/**
 * free_list - Frees a list
 * @head: Address of first element
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t **temp = (list_t **)malloc(sizeof(list_t *));

	while (head != NULL)
	{
		*temp = head;

		while (*temp != NULL)
		{
			*temp = (*temp)->next;
		}

		free(*temp);
	}
	free(head);

	free(temp);
}
