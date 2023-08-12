#include <stdio.h>
/**
 * main - Entry point
 * @void: Null valu
 *
 * Description: Prints all combinations of two digits with,
 * Return: Zero value
 */

int main(void)
{
	int a, x;

	for (a = 0; a < 9; a++)
	{
		for (x = a + 1; x < 10; x++)
		{

			putchar((a % 10) + '0');
			putchar((x % 10) + '0');

			if (a == 8 || x == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
