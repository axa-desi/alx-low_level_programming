#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers of base 16
 * Return: Zero value
 */

int main(void)
{
	char c;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
