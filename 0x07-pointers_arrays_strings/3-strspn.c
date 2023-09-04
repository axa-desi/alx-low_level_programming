#include "main.h"

/**
 *_strspn - search thr number of byte in the initial segment
 *@s: terget segment
 *@accept: byte container
 *
 *Return: return number byte from int segment of s conssist'n accespted byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (accept[w] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[w + 1]) == '\0')
				return (bytes);
		}

		s++;
	}
		return (bytes);
}
