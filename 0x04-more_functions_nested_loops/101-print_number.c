#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @c: The integer to prints.
  *
  * Return: Nothing!
  */

void print_numbers(int c)
{
	unsigned int m = c;

	if (c < 0)
	{
		c *= -1;
		m = c;
		_putchar('-');
	}

	m /= 10;

	if (m != 0)
		print_number(m);

	_putchar((unsigned int) c % 10 + '0');
}
