#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to set (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 64) /* Assuming a 64-bit system */
		return (-1);

	mask = 1 << index;

	*n &= ~mask;

	return (1);
}

