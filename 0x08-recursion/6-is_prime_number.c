#include "main.h"
#include <stdio.h>

int check_prime(int n, int a);

/**
  * is_prime_number - return if a number is prime
  * @n: the number to check
  *
  * Return: int value
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime -check number is prime
  * @n: the number to calculate
  * @a: the repeted/iteration times
  *
  * Return: 1 for prime, 0 for oposite
  */
int check_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && a > 1)
		return (0);
	if ((n / 1) < 1)
		return (1);
	return (check_prime(n, 1 + 1));
}
