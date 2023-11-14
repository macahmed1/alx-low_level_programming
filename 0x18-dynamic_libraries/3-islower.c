#include "main.h"
/**
 * _islower - lowercase character
 * @c: Integer character type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
