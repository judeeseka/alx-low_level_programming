#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number to make change
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, n, coins = 0;
	int change_from[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (n >= change_from[i])
			{
				coins += (n / change_from[i]);
				n %= change_from[i];
			}
		}
		printf("%d\n", coins);
	}

	return (0);
}
