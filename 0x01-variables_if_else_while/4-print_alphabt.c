#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q')
		{
			if (x != 'e')
			{
				putchar(x);
			}
		}
	}

	putchar('\n');
	return (0);
}
