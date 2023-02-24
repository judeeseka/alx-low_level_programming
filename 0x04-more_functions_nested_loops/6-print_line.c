#include "main.h"

/**
 * print_line - Entry point
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	int x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
