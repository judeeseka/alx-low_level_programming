#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: input string
 * @c: character to be located in the string
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return ('\0');
}
