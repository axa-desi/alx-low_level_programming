 /*
  * File: 2-print_alphabet.c
  * Auth: Axa Desi
  */
  #include <stdio.h>
  
   /**
    * main - Prints the alphabet in uppercase.
    *
    * Return: Always 0
    */
int main(void)
{
	char c = 'a';
	while (c <= 'Z')
	{
		putchar(c)
			c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	
	putchar('\n');
	return (0)
}
