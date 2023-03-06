#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to char pointing to the buffer
 * @b: constant byte to fill the memory area
 * @n: int value by which memory area is filled
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
