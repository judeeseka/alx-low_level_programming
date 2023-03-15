#include "main.h"
#include <stdlib.h>

/**
 * free_grid - deallocate memory space
 * @grid: p2p array
 * @height: array column
 * Return: void
 */

void free_grid(int **grid, int height)
{
	(void)height;

	free(grid);
}
