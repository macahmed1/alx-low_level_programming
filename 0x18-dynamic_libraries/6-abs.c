#include "main.h"
/**
 * _abs - computing the absolute value of an integer.
 * @n: type int
 * Return: Returns an absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
