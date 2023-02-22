#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: function parameter
 * Return: an int value
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = (-1 * n) % 10;
		_putchar(x + '0');
	}
	else
	{
		x = n % 10;
		_putchar(x + '0');
	}
	return (x);
}
