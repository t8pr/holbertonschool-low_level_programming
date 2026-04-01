#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: double pointer to the 2D array
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

/* 1. Check if the grid is already NULL to avoid errors */
if (grid == NULL || height <= 0)
return;

/* 2. Free each individual row (the 'columns' arrays) first */
for (i = 0; i < height; i++)
{
free(grid[i]);
}

/* 3. Finally, free the array of pointers (the 'rows' array) */
free(grid);
}
