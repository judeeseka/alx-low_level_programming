#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string param
 * @s2: second string param
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, m = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		;
	for (k = 0; s2[k]; k++)
		;

	p = malloc(sizeof(char) * (j + k + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		*(p + m) = s1[i];
		m++;
	}

	for (i = 0; i < k; i++)
	{
		*(p + m) = s2[i];
		m++;
	}

	*(p + m) = '\0';

	return (p);
}
