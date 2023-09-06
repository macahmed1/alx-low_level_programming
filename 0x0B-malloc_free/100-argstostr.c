#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The argument count
 * @av: The argument vector (array of strings)
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, k = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
	{
		total_len++;
		j++;
	}
		total_len++; /* Account for the newline character */
	}

	concatenated = malloc((total_len + 1) * sizeof(char));

		if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
		concatenated[k++] = av[i][j];
		j++;
		}
		concatenated[k++] = '\n';
	}

		concatenated[k] = '\0';

	return (concatenated);
	}
