#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print _putchar
 * Return: Always 0
 */
int main(void)
{
	char ch_arr[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch_arr[i]);
	}
	_putchar('\n');

	return (0);
}

