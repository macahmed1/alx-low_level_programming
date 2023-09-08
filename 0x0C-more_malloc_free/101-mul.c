#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string contains only digits
 * @multiply: Multiply two positive numbers represented as strings
 * @main: main entry
 * @str: The input string to check
 * Return: 1 if it's a positive number, 0 otherwise
 */

int is_positive_number(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}
	return (1);

}
	char *multiply(char *num1, char *num2)
	{
	int len1 = 0, len2 = 0, len_result;
	char *result;

	while (num1[len1])
	len1++;
	while (num2[len2])
	len2++;

	len_result = len1 + len2;
	result = malloc(sizeof(char) * (len_result + 1));

	if (result == NULL)
	return (NULL);

	for (int i = 0; i < len_result; i++)
	result[i] = '0';

	for (int i = len1 - 1; i >= 0; i--)
	{
	int carry = 0;
	int n1 = num1[i] - '0';

	for (int j = len2 - 1, k = len_result - (len1 - i); j >= 0; j--, k--)
	{
	int n2 = num2[j] - '0';
	int product = (n1 * n2) + (result[k] - '0') + carry;

	carry = product / 10;
	result[k] = (product % 10) + '0';
	}

	if (carry > 0)
		esult[i] = (result[i] - '0' + carry) + '0';
	}

	if (result[0] == '0')
	result++;

	result[len_result] = '\0';

	return (result);
}
	int main(int argc, char *argv[])
	{
	char *num1, *num2, *result;

	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
	printf("Error\n");
	exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	result = multiply(num1, num2);

	if (result == NULL)
	{
	printf("Error\n");
	exit(98);
}
	printf("%s\n", result);
	free(result);

	return (0);
}
