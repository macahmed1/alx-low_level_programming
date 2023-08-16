#include "main.h"
/**
 * main - Write a script that prints "_putchar".
 * Description: Standard libraries not allowed..
 * Return: Always 0
 */
int main(void)
{
	char _Putchar[] = "_putchar";
	int i = 0;

	while (_Putchar[i] != '\0')
	{
		_putchar(_Putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
