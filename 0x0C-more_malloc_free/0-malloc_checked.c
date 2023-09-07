#include "main.h"

/**
 * malloc_checked - Function to allocate memory using malloc
 * @b: unsigned integer.
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b); /* Allocate memory using malloc */

	if (ptr == NULL)
	{
		exit(98); /* Exit with status 98 if malloc fails */
	}

	return (ptr);
}
