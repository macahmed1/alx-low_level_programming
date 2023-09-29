#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	if (*byte_ptr)
		return (1);
	else
		return (0);
}

