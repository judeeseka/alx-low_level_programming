#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination of the copy
 * @src: copy source
 * @n: number of elements to be copied
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
