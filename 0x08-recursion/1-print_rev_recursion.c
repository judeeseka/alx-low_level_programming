#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string paramter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
