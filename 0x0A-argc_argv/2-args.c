#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * Only print one argument per line, ending with a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
