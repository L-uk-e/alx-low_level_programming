#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Pointer of a pointer of the first element
 * @n: The number stored by the element
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element = (listint_t *)malloc(sizeof(listint_t));

	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
