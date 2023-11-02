#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers.
  * @min: The first value of the array
  * @max: The last value of the array
  *
  * Return: If min > max or the function fails - NUL, else a pointer
  */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
