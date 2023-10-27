#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints that adds positive numbers, followed by a new line
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always (0)
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *ptr;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];

			for (k = 0; k < strlen(ptr); k++)
			{
				if (ptr[k] < 48 || ptr[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(ptr);
			ptr++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
