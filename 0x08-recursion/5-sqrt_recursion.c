#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Number of int.
 * Return: This returns -1 if no natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - This is help function for  _sqrt_recursion
 * @c: To if it is square root
 * @i: The incrementer to compare against the value of `c`
 * Return: This returns square root if it is natural. Else returns -1 if none is found.
 */

int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
