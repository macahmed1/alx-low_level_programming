#include "main.h"
/**
 * print_sign - This is to print the sign of a number.
 * @n: int type, with either positive or negative.
 * Return: Returns 1 if positive, 0 if zero, and -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
