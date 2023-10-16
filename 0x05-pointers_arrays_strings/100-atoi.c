#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to be to convert
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int u = 0;
	int dig = 1;
	int sns = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			dig *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			sns = 1;
			u = (u * 10) + (s[c] - '0');
			c++;
		}

		if (sns == 1)
		{
			break;
		}

		c++;
	}

	u *= dig;
	return (u);
}
