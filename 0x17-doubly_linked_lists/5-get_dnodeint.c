#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a dlistint_t
 * @head: Pointer to the first element of the dlist
 * @index: index of the node
 *
 * Return: The nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *temp_p;

	temp_p = head;

	while (index > num)
	{
		if (temp_p->next == NULL)
		{
			return (NULL);
		}
		temp_p = temp_p->next;
		num++;
	}

	return (temp_p);
}
