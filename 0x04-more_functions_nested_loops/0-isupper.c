#include "main.h"

/**
 * _isupper - Writing a function that checks for uppercase characters
 * @c: int type number
 * Return: Returns 1 if is uppercase, else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
