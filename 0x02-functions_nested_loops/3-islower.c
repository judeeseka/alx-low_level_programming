#include "main.h"

/**
 * _islower - Entry point
 * @c: the integer parameter
 * Return: either 0 or 1 (condition)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
