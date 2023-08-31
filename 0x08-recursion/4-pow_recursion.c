#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x raised to the power of y.
 * @x: The value of the number.
 * @y: The power of the number.
 * Return: Returns x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
