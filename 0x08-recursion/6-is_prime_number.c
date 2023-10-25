#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
  * is_prime_number - Returns 1 if a number is prime else 0
  * @n: given number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - detect if a given number is prime
  * @n: given number to be detected
  * @i: the iteration times
  *
  * Return: 1 for prime, otherwise 0
  */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
