#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer
  * @c: The parameter, integer value/ input
  *
  */
void print_number(int c)
{
	unsigned int x = c;

	if (c < 0)
	{
		_putchar(45);
		x = -x;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
