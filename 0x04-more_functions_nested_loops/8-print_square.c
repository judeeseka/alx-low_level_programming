#include "main.h"

/**
 * print_square - Entry point
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	int i = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			int j = 1;

			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			if (i != size + 1)
			{
				_putchar('\n');
			}
			i++;
		}
	}
}
