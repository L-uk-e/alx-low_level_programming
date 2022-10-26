#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int x;
	size_t y = 0;
	char *word;
	const list_t *temp = (list_t *)malloc(sizeof(list_t));

	temp = h;
	while (temp != NULL)
	{
		word = temp->str;
		x = 0;

		if (word == NULL)
		{
			word = "(nil)";
		}
		else
		{
			while (*(word + x) != '\0')
			{
				x++;
			}
		}

		printf("[%d] %s\n", x, word);

		temp = temp->next;
		y++;
	}

	return (y);
}
