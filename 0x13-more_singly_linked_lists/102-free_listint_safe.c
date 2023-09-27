#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to a pointer to the head of the list
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t node_count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
	next = current->next;
		free(current);
		node_count++;
		current = next;
	}

	*h = NULL;
	return (node_count);
}

