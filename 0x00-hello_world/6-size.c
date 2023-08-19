#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print allsizes of a computer
 * Return: Always Zero
 */
int main(void)
{
	char charType;
	int inttype;
	long long longlongType;
	long longType;
	float floatType;
	{
		printf("Size of char: %ld byte(s)\n", sizeof(char));
		printf("Size of int: %ld byte(s)\n", sizeof(int));
		printf("Size of int: %ld byte(s)\n", sizeof(long long));
		printf("Size of long: %ld byte(s)\n", sizeof(long));
		printf("Size of long long: %ld byte(s)\n", sizeof(float));


		return (0);
	}

