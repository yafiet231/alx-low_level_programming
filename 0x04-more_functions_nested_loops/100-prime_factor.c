#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints the largest prime factor of the number 612852475143
  *
  * Return: (0)
  */

int main(void)
{
	long int i, n, d;

	n = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%1d\n" i);
				break;
			}
			d = n / i;
		}
	}
}

