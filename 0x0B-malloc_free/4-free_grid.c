#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees a 2 Dimensional Array
* @grid: Pointer to 2D Array
* @height: Length of elements on rows
*/
void free_grid(int **grid, int height)
{
	int rows;

	if (grid == NULL)
		free(grid);

	for (rows = 0; rows < height; rows++)
		free(*(grid + rows));

	free(grid);
}
