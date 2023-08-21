#include "main.h"

/**
 * swap_int - swapping the values of two given integers
 * @a: int pointer type
 * @b: int pointer type
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
