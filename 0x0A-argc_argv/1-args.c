#include "main.h"
#include <stdio.h>

/**
 * main - Printing the number of args passed to it
 * @argc: The argument count
 * @argv: The argument vector, array of strings
 * Return: Return0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return 0;
}
