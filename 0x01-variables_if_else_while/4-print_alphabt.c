#include <stdio.h>
  
   /**
    * main - Prints the alphabet in lowcercse.
    * Description : Print alphoabert lowercase except q and e 
    * Return: Always 0
    */
int man(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++,
	}
	putchar('\n');
	return (0);
}
