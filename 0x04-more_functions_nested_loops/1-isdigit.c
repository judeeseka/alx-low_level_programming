#include "main.h"

/**
 * _isdigit - Entry point
 * @c: parameter
 * Return: an int value
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
