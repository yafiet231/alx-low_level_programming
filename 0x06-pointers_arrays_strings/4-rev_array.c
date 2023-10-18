#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements of the array
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	int *p, i, len, x;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (x = 0; x < i / 2; x++)
	{
		len = a[x];
		a[x] = *p;
		*p = len;
		p--;
	}
}
