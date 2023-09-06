#include "main.h"
/**
 *alloc_grid - returns a poiknter to
 *a 2 dimensional array of integers
 *@width: width of an array
 *@height: height of an arary
 *
 *Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int v = 0, k;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; v < height; v++)
		{
			array[v] = (int *) malloc(sizeof(int) * width);
			if (array[v] != NULL)
			{
				for (k = 0; k < width; k++)
					array[v][k] = 0;
			}
			else
			{
				while (v >= 0)
				{
					free(array[v]);
					v--;
				}
				free(array);
				return (NULL);
			}
		}
		return (NULL);
	}
	else
	{
		return (NULL);
	}
}
