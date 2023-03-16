#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/*if program is only called/launched...1*/
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j); j++)
			{
				if (((*(argv[i] + j) < 48) || (*(argv[i] + j) > 57)))
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
