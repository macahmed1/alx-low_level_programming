#include "main.h"

/**
 * wildcmp - Function that compares two strings and returns 1 if the strings can be considered identical, 
 * otherwise return 0.
 * @s1: value string 1
 * @s2: Value string 2
 * Return: If strings can be considered identical, return 1. Else return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return wildcmp(s1, ++s2);
		else if (*s1 == '*' && *s2 == '\0')
			return wildcmp(++s1, s2);
		return (0);
	}

	if (*s1 == *s2)
	{
		return wildcmp(++s1, ++s2);
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return wildcmp(++s1, s2);
		else
		{
			return wildcmp(s1, findsrc(s2, *(s1 + 1), 0, 0) + s2);
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return wildcmp(s1, ++s2);
		else
		{
			return wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0), s2);
		}
	}

	return (0);

}

int findsrc(char *s, char c, int i, int p)
{
	if (*(s + i) == '\0')
		return (p + 1);
	else if (*(s + i) == c || *(s + i) == '*')
		p = i;

	return (findsrc(s, c, i + 1, p));
}
