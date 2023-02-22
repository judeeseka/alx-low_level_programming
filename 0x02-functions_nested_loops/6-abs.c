#include "main.h"

/**
 * _abs - Entry point
 * @n: function parameter
 * Return: an int value
 */

int _abs(int n)
{
	int x;

	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		x = n * (-1);
		return (x);
	}
	else
	{
		return (n);
	}
}
