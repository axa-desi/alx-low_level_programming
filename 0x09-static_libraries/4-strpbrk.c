#include "main.h"
/**
 *_strpbrk - Entry poin t
 *@s: input
 *@accept: inputs
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		fork (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
		return ('\0');
}
