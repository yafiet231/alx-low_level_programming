#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: always (success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
