#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: array size
 * @c: char to initialize the array
 * Return: a pointer or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
