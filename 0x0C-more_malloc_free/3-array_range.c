#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min array value
 * @max: max array value
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, len, *p;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(sizeof(int) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
		p[i] = min;

	return (p);
}
