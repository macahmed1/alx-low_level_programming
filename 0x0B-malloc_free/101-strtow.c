#include <stdlib.h>
#include "main.h"

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int i, j, word_count = 0;
	char **words = NULL;

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
{
	if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
		 word_count++;
}

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (*str != '\0')
	{
		if (!is_space(*str))
		{
			j = 0;
			while (str[j] != '\0' && !is_space(str[j]))
				j++;

			words[i] = malloc((j + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			for (j = 0; str[j] != '\0' && !is_space(str[j]); j++)
				words[i][j] = str[j];
				words[i][j] = '\0';
				i++;
				str += j;
		}
		else
		{
			str++;
		}
	}

	words[i] = NULL;

	return (words);
}
