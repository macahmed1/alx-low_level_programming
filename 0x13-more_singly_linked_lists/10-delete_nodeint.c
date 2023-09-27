#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (starting from 0).
 *
 * Return: 1 if the node was deleted successfully, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
 		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}

