#include "main.h"
#include <stdio.h>
/**
 *main - prints the name of the programe
 *@argc: the number of arguments
 *@argv: the array of arguments
 *
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
