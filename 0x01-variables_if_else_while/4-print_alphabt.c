#include <stdio.h>
   /**
    * main - Entry point.
    * @void: Null value
    *
    * Description: Print alphoabert lowercase except q and e
    *
    * Return: Always 0
    */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
