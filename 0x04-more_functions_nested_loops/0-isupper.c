#include "main.h"

/**
 * _isupper - Entry point
 * @c: function parameter
 * Return: an int value
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
