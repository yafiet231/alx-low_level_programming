#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: the given number
  *
  * Return: factorial of a number
  */
int factorial(int x)
{
	if (x < 0)
		return (-1);

	if (x <= 1)
		return (1);

	return (x * factorial(x - 1));
}
