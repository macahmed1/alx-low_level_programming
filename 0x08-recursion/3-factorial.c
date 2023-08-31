#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number..
 * @n: Number is int type.
 * Return: This returns the factorial of a number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
