#include <unistd.h>

/**
 * _putchar - character c to be written to stdout
 * @c: The character to print
 *
 * Return: Returns 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
