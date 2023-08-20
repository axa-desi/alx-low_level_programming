#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to priknt
 * Return: on success 1.
 * On error, -1 is returned, and error is set appropraitely.
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
