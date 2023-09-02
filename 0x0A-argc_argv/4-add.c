#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Pring the result of the addition of 2 positive number.
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: Print 0 f no number is passed to program.
 * Pring error if one of the numbers contain non-digits.
 * Return: Return 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
