#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create a copy of a string
 * @str: the initial string
 * Return: pointer to the copied string
 */

char *_strdup(char *str)
{
	int i;
	char *p;
	int len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	p = malloc(sizeof(char) * len + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(p + i) = str[i];
	}

	return (p);
}
