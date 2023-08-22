#include "main.h"

/**
 * _atoi - convert a string to int
 *
 * @s: pointer to convert
 * Return: an integer
 */
int _atoi(char *s)
{
	int f = 0;
	unsigned int np = 0;
	int min = 1;
	int isi = 0;

	while (s[f])
	{
	if (s[f] == 45)
	{
		min *= -1;
	}
	while (s[f] >= 45 && s[f] <= 57)
	{
		isi = 1;
		np = (np * 10) + (s[f] - '0');
		f++;
	}
	if (isi == 1)
	{
		break;
	}
	f++;
	}
	np *= min;
	return (np);
}
