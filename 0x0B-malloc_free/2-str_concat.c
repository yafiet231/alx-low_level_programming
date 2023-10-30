#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: The two concatened strings or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	d = a + b;
	s = malloc((sizeof(char) * d) + 1);

	if (s == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			s[c] = s1[c];

		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}

		c++;
	}

	s[c] = '\0';
	return (s);
}
