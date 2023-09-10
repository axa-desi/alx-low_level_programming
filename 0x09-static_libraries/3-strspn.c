#include "main.h"
/**
 *_strspn - Entry point
 *@s: input
 *@accept: input
 *Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				n++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
