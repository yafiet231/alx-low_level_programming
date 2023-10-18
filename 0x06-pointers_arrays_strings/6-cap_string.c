#include "main.h"
#include <stdio.h>

/**
  * cap_string - capitalizes all words of a string
  * @s: a string to be capitalized
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int z = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[z])
	{
		i = 0;

		while (i < cspc)
		{
			if ((z == 0 || s[z - 1] == spc[i]) && (s[z] >= 97 && s[z] <= 122))
				s[z] -= 32;

			i++;
		}

		z++;
	}

	return (s);
}
