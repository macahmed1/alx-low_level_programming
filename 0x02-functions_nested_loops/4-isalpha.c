#include "main.h"
/**
 * _isalpha - Checking for alphabetic character.
 * @c: int character type
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
