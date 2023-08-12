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
	int i = '0';

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
