#include "main.h"

/**
 * rev_string - Reversing a string
 *
 * @s: the sring to be modified
 * Return: always 0
 */
void rev_string(char *s)
{
	int len = 0, guy = 0;

	char tmp;

	while (s[guy++])
		len++;
	for (guy = len -1; guy >= len / 2; guy--)
	{
		tmp = s[guy];
		s[guy] = s[len - guy -1];
		s[len - guy - 1] =tmp;
	}
}
