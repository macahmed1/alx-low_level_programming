#include <unistd.h>

/**
 * _putchar - Writing C character to stdout.
 * @c: Expected output
 *
 * Return: Returns 1 On success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
