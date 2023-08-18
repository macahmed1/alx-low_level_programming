#include "main.h"

/**
 * print_numbers - Function to print the numbers from 0 to 9
 * Description: Use _putchar twice
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
