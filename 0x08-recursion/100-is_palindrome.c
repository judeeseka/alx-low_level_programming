#include "main.h"

/**
 * _strlen - find the string length
 * @s: string param
 * Return: an int value
 */

int _strlen(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - check if the string is a palindrome
 * @s: the string to be checked
 * @len: string length
 * @i: index
 * Return: an int value
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - palindrome checker entry
 * @s: string param
 * Return: an int value
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
