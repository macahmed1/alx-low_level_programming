#include "main.h"

/**
 * print_line - Function to draw a straight line
 * @n: Underscore to be printed for a number of times.
 * Description: Using only _putchar to print
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
