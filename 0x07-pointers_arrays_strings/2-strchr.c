#include "main.h"

/**
  * _strchr - locate character in string
  * @s: string to be searched
  * @c: character to be located
  *
  * Return: if c is found - a pointer to the first occurence
  * if c is not found - null.
  */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
