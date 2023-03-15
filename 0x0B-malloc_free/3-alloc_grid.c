#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Outputs a 2 Dimensional Array
* @width: Length of elements on column
* @height: Length of elements on rows
* Return: Pointer to a 2 Dimensional Array
*/

int **alloc_grid(int width, int height)
{
	int rows = 0;
	int cols = 0;
	int **ptrM;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	/**
	* Memory Allocation for Rows
	*/
	ptrM = malloc(height * sizeof(int *));

	if (ptrM == NULL)
		return (NULL);

	for (rows = 0; rows < height; rows++)
	{
		/**
		* Memory Allocation for Columns
		*/
		*(ptrM + rows) = malloc(width * sizeof(int));

		if (*(ptrM + rows) == NULL) /* Memory Validation - Cols */
		{
			for (rows = 0; rows < height; rows++)
				free(*(ptrM + rows));

			free(ptrM);
			return (NULL);
		}

		for (cols = 0; cols < width; cols++)
			*(*(ptrM + rows) + cols) = 0;
	}
	return (ptrM);
}
