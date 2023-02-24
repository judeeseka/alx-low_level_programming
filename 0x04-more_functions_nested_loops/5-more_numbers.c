#include "main.h"

/**
 * more_numbers - Entry point
 * Return: void
 */

void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}

		if (i != 11)
		{
			_putchar('\n');
		}
		i++;
	}
}
