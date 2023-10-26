#include "main.h"
#include <stdio.h>

int _sqrt(int n, int x);

/**
  * _sqrt_recursion -returns the nautrual squar root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - calculates the natural square root
  * @n: number to calculate
  * @x: iterate number
  *
  * Return: natrual sqr root
  */
int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-x);

	if (sqrt == n)
		return (x);

	return (_sqrt(n, x + 1));
}
