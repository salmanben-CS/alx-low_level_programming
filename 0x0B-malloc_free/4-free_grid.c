#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free memory allocation
 * @grid : pointer points on 2d array
 * @height : the line count
 * Return: void
 */
void free_grid(int **grid, int height)
{
for (int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

