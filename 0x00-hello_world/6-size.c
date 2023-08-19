#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print allsizes of a computer
 * Return: Always Zero
 */
int main(void)
{
	int x;
	long int t;
	long long int u;
	char v;
	float w;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(v));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(t));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)size(u));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(w));
	return (0);
	}

