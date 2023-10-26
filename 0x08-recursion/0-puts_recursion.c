#include <unistd.h>

/**
  *_putchar - writes the charaters c to stdout
  * @c: the character to print
  *
  *Return: success 1, error -1, error is set appropriately.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
