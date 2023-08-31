#include "main.h"

/**
 * is_prime_number - Returns 1 if integer is a prime number, else return 0.
 * @n: Value number of int.
 * Return: This returns  1 if is prime. Else, returns 0 if it is otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (hai(n, 2));
}

/**
 * _sqrt - This is returns the  square root of number
 * @x: number value x
 * @i: number i incrementer.
 * Return: This returns the square root of `x`
 */

int _sqrt(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
		return (i);
	else
		return (_sqrt(x, i + 1));
}

/**
 * hai - The function for help.
 * @n: The original function give is is_prime_number
 * @d: incrementer entry
 * Return:  Returns 1 if is prime. Else returns 0 if not prime.
 */

int hai(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (_sqrt(n, 1) < d)
		return (1);
	else
		return (hai(n, d + 1));
}
