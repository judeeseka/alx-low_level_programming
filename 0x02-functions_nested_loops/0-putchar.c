#include "main.h"

/**
 * main - Entry point
 * Return: 0 (sucess)
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while(str[i] != '\0')
	{
		char res = str[i];
		_putchar(res);

		i++;
	}
	return (0);
}
