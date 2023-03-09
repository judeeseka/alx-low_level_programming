#include "main.h"

/**
 * _strlen_recursion - find the length of a string
 * @s: string param
 * Return: an int value
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}

	return (len);
}
