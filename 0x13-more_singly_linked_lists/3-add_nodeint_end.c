#include "lists.h"

/**
 * add_nodeint_end - Adds a new element at the end of a list
 * @n: Number to be stored by element
 * @head: Pointer of pointer of first element
 *
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = (listint_t *)malloc(sizeof(listint_t));

	if (new_element == NULL || last == NULL)
	{
		return (NULL);
	}
	
	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_element;
}
