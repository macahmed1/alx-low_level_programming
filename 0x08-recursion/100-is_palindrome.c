#include "main.h"

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: Array string value of a char.
 * Return: Returns 1 if a string is a  palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;

	return (my_pal(s, --length));
}

/**
 * get_length - Getting the length of string
 * @s: value of a string
 * Return: Returns length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}

/**
 * my_pal - checking the recursive of palindrome
 * @s: Value of a string
 * @l: String length
 * Return: Returns 1 if palindrome, 0 if not
 */

int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++s, l - 2));
	}
	else
		return (0);
}
