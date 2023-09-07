#include "main.h"
#include <string.h>

/**
 * _calloc - Allocate memory for an array and initialize to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory (initialized to zero).
 *         NULL if nmemb or size is 0, or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size to allocate */
	total_size = nmemb * size;

	/* Allocate memory using malloc */
	ptr = malloc(total_size);

	/* Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	memset(ptr, 0, total_size);

	return (ptr);
}
