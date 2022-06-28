#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grind - frees the memory
 * @grid: The array to be removed from memory
 * @height: Height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
