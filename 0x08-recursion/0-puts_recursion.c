#include "main.h"

/**
 * _puts_recursion - To print a string with a new a line
 * @s: This is a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
