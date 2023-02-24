#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			if (i > 1 && i <= n)
			{
				int j = 1;

				while (j < i)
				{
					_putchar(' ');
					j++;
				}
			}
			_putchar('\\');
			if (i != n + 1)
			{
				_putchar('\n');
			}
			i++;
		}
	}
}
