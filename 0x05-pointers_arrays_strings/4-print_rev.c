#include "main.h"

/**
 * rev_string - entry point
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
