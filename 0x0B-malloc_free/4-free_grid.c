#include "main.h"
/**
 * free_grid -  2 dimensional grid
 * @grid: paramter
 * @height: paramter
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
