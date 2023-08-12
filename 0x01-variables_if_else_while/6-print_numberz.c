#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: print m=numbers in base 10
 * Return: Always 0
 */

int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
