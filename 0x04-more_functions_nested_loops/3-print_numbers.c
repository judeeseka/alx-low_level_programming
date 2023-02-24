#include "main.h"

/**
 * print_numbers - Entry point
 * Return: no return value
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
