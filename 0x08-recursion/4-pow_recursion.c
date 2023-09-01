#include "main.h"

/**
  * _pow_recursion - returns the value of x  power of y
  * @x: value to multiply
  * @y: times to multiply
  *
  * Return: the value of y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
