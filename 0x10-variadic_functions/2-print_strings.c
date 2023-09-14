#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a separator and a new line
 * @separator: The separator to print between the strings (or NULL)
 * @n: The number of strings to print
 * @...: Variable number of string arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

		va_end(args);

		printf("\n");
}

