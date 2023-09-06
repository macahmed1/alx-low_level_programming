#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates and initialize array of chars with a specific char
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the created array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}
