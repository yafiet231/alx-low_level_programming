#include <stdio.h>

/**
 * main - print first 52 fibonacci numbers, starting with 1 and 2
 * followed by a new line separated by comma followed by a space
 *
 * return: (success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	
	for (count = 0; count < 51; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		
		fib1 = fib2;
		fib2 = sum;
		if (count == 50)
			printf("\n");
	}
}
