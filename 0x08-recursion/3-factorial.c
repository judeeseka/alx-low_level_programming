#include "main.h"

/**
 * factorial - find factorial of a given number
 * @n: given number
 * Return: an int value
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
