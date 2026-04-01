#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

/* 1. Allocate memory for the "rows" (array of pointers) */
grid = malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
/* 2. Allocate memory for each "column" (array of integers) */
grid[i] = malloc(sizeof(int) * width);

/* 3. If a row allocation fails, free all previous rows and the grid */
if (grid[i] == NULL)
{
for (; i >= 0; i--)
free(grid[i]);
free(grid);
return (NULL);
}

/* 4. Initialize elements to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
