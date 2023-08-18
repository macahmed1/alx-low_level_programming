#include "holberton.h"

/**
 * print_diagonal - Function to draw a diagonal line
 * @n: This is to show the number of times the '\' char is printed
 * Description: Using _putchar to print
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
