#include "main.h"

/**
 * print_most_numbers - Printing number from 0 through 9, the exception of 2 and 4.
 * Description: Use _putchar twice.
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');

		i++;
	}
	_putchar('\n');
}
