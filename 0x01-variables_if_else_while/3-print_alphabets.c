#include <stdio.h>

   /**
    * main - Entry point
    * @void: Null value
    *
    * Description: Prints the alphabet in uppercase.
    * Return: Always 0
    */

int main(void)
{
	char c, b;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
