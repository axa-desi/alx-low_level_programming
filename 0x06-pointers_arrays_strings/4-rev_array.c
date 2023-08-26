#include "main.h"

/**
 * reverse_array - reverse an array funtion
 * @a: an input array
 * @n: number of elements of array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int kicc;

	while (i < n--)
	{
		kicc = a[i];
		a[i++] = a[n];
		a[n] = kicc;
	}
}
