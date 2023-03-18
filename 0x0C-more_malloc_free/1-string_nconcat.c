#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find string length
 * @s: the string param
 * Return: an int value
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}

/**
 * string_nconcat - concatenate two strings
 * @s1: the first string param
 * @s2: the second sting param
 * @n: a specified length for s2
 * Return: an array of both s1 and s2 string values
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m = 0, k;
	char *p;

	if (s1 != NULL)
		j = _strlen(s1);
	if (s2 != NULL)
		k = _strlen(s2);

	p = malloc(sizeof(char) * (j + n + 1));

	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < j; i++)
		{
			*(p + m) = s1[i];
			m++;
		}
	}
	if (s2 != NULL && (n < k))
	{
		for (i = 0; i < n; i++)
		{
			*(p + m) = s2[i];
			m++;
		}
	}
	else if (s2 != NULL)
	{
		for (i = 0; i < k; i++)
		{
			*(p + m) = s2[i];
			m++;
		}
	}

	*(p + m) = '\0';
	return (p);
}
