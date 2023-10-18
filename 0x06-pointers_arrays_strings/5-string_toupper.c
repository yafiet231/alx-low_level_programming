#include "main.h"

/**
  * string_toupper - Changes all lowercase letters of a string to uppercase
  * @p: The string to be modified
  *
  * Return: char var
  */
char *string_toupper(char *p)
{
	int b = 0;

	while (p[b])
	{
		if (p[b] >= 97 && p[b] <= 122)
		{
			p[b] -= 32;
		}

		b++;
	}

	return (p);
}
