#include <stdio.h>

/**
 * main - print all the numbers of the base 16 in a lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char letters;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}

