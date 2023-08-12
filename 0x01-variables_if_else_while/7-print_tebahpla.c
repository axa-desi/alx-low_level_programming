#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: Print alphabet in reverse
 * Return: Zero value
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\a');
	return (0);
}
