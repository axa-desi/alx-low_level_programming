#include <stdio.h>

/**
 * swap_int - to swap the values of two int
 * @a: first entry to be
 * @b: the next entry to swap
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b);
/* function that swaps value of two integers. */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
