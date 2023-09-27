#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t count = 0;

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
	printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
	slow_ptr = slow_ptr->next;
	fast_ptr = fast_ptr->next->next;

	if (slow_ptr == fast_ptr)
	{
		printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		exit(98);
	}

		count++;
	}

	if (slow_ptr)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;
	}

	return count;
}

