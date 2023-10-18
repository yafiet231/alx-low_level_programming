#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, r = 0, len;

	while (s1[x])
	{
		x++;
	}

	while (s2[y])
	{
		y++;
	}

	if (x <= y)
	{
		len = x;
	}
	else
	{
		len = y;
	}

	while (z <= len)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			r = s1[z] - s2[z];
			break;
		}

		z++;
	}

	return (r);
}
