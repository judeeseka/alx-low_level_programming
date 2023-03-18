#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocation using malloc
 * @b: size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
